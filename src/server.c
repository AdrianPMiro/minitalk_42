/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:33:23 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/17 17:57:19 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#define MAX_MSG_LEN 1000000 // Define un tamaño máximo seguro para el mensaje

int	main(void)
{
	struct sigaction	sa;

	printf("The pid is: %d\n", getpid());
	if (sigemptyset(&sa.sa_mask) == -1)
		error(1);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = interpret_signal;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
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
}

void	process_signal(int bit, int pid_client)
{
	static t_minitalk	list;
	static int			init = 0;

	if (init != 1)
		variable_init(&list, &init);
	if (list.check == 0)
	{
		build_len(&list, bit, pid_client, init);
		traceroute_server(pid_client);
		return ;
	}
	if (list.byte_index >= 32)
	{
		if (list.bit_index < (list.len * 8))
		{
			list.msg[list.bit_index / 8] |= (bit << (7 - list.bit_count));
			list.bit_count++;
			if (list.bit_count == 8)
				list.bit_count = 0;
			list.bit_index++;
			traceroute_server(pid_client);
		}
		if (list.bit_index == (list.len * 8))
			print_msg(&list, &init, pid_client);
	}
}

void	build_len(t_minitalk *list, int bit, pid_t pid_client, int init)
{
	unsigned int	i;

	i = 0;
	if (list->byte_index < 32)
	{
		list->len |= ((unsigned int)bit << (31 - list->byte_index));
		list->byte_index++;
		if (list->byte_index == 32)
		{
			if (list->len == 0 || list->len > MAX_MSG_LEN)
			{
				print_msg(list, &init, pid_client);
				return ;
			}
			list->msg = (char *)malloc(list->len * sizeof(char));
			if (!list->msg)
				error(3);
			while (i < list->len)
				list->msg[i++] = 0;
			traceroute_server(pid_client);
			printf("Len: %d\n", list->len);
			list->check = 1;
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
