/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:23:50 by adpedrer          #+#    #+#             */
/*   Updated: 2024/11/24 16:06:50 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_var = 1;

int	main(int tokens, char **msg)
{
	struct sigaction	sa;
	pid_t				pid;

	if (tokens != 3)
		error(1);
	pid = ft_atoi(msg[1]);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = process_signal_client;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	if (ft_strlen(msg[2]) == 0)
		error(2);
	transmit_len(pid, ft_strlen(msg[2]));
	transmit_msg(pid, msg[2], ft_strlen(msg[2]));
	return (0);
}

void	process_signal_client(int sig, siginfo_t *info, void *context)
{
	(void)info;
	(void)context;
	if (sig == SIGUSR1)
		g_var = 0;
}

void	traceroute_client(void)
{
	while (g_var)
		pause();
	g_var = 1;
}

void	transmit_len(pid_t pid, int len)
{
	int	i;

	i = 31;
	while (i >= 0)
	{
		if (len & (1U << i))
		{
			if (kill(pid, SIGUSR2) == -1)
				error(-1);
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				error(-1);
		}
		traceroute_client();
		i--;
	}
}

void	transmit_msg(pid_t pid, char *msg, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 7;
		while (j >= 0)
		{
			if (msg[i] & (1 << j))
			{
				if (kill(pid, SIGUSR2) == -1)
					error(-1);
			}
			else
			{
				if (kill(pid, SIGUSR1) == -1)
					error(-1);
			}
			traceroute_client();
			j--;
		}
		i++;
	}
}
