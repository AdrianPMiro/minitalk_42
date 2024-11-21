/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:29:36 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/17 17:57:29 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error(int err)
{
	if (err == -1)
		printf(" Pid no valido");
	else if (err == 1)
		printf(" Mal valores de entrada( tokens)");
	else if (err == 2)
		printf(" Mal valores de entrada (msg)");
	else if (err == 3)
		printf(" Error malloc");
	else if (err == 4)
		printf(" Error msg");
	exit(1);
}

void	variable_init(t_minitalk *list, int *init)
{
	list->msg = NULL;
	list->len = 0;
	list->check = 0;
	list->byte_index = 0;
	list->bit_index = 0;
	list->bit_count = 0;
	*init = 1;
}

void	variable_reset(t_minitalk *list, int *init)
{
	if (list->msg)
	{
		free(list->msg);
		list->msg = NULL;
	}
	*init = 0;
	list->check = 0;
	list->len = 0;
	list->byte_index = 0;
	list->bit_index = 0;
	list->bit_count = 0;
}

void	traceroute_server(pid_t pid_client)
{
	if (kill(pid_client, SIGUSR1) == -1)
		error(4);
}
