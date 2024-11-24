/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:33:23 by adpedrer          #+#    #+#             */
/*   Updated: 2024/11/24 16:38:32 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#define MAX_MSG_LEN 1000000

int	main(void)
{
	struct sigaction	sa;

	printf("The pid is: %d\n", getpid());
	if (sigemptyset(&sa.sa_mask) == -1)
		error(1);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = interpret_signal;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		error(1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		error(1);
	while (1)
		pause();
	return (0);
}

void	interpret_signal(int sig, siginfo_t *info, void *context)
{
	static int	pid_client;
	int			bit;

	(void)context;
	if (pid_client != info->si_pid)
		pid_client = info->si_pid;
	if (sig == SIGUSR2)
		bit = 1;
	else
		bit = 0;
	process_signal(bit, pid_client);
	if (kill(pid_client, SIGUSR1) == -1)
		error(1);
}

void	build_len(t_minitalk *list, int bit, pid_t pid_client, int init)
{
	(void)init;
	list->len = (list->len << 1) | bit;
	list->bit_index++;
	if (list->bit_index == 32)
	{
		if (list->len == 0 || list->len > MAX_MSG_LEN)
		{
			error(3);
			return ;
		}
		list->msg = (char *)malloc(list->len + 1);
		if (!list->msg)
			error(3);
		list->msg[list->len] = '\0';
		list->check = 1;
		list->bit_index = 0;
	}
	traceroute_server(pid_client);
}

void	process_signal(int bit, int pid_client)
{
	static t_minitalk		list;
	static int				init = 0;
	static int				bits_received = 0;
	static unsigned char	byte = 0;

	if (init != 1)
		variable_init(&list, &init);
	if (list.check == 0)
		build_len(&list, bit, pid_client, init);
	else
	{
		byte = (byte << 1) | bit;
		bits_received++;
		if (bits_received == 8)
		{
			list.msg[list.byte_index++] = byte;
			bits_received = 0;
			byte = 0;
		}
		if (list.byte_index == list.len)
		{
			print_msg(&list, &init, pid_client);
			return ;
		}
	}
}

void	print_msg(t_minitalk *list, int *init, pid_t pid_client)
{
	if (list->len > 0)
		write(1, list->msg, list->len);
	variable_reset(list, init);
	traceroute_server(pid_client);
}
