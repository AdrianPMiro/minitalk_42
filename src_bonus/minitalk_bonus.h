/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:56:52 by adpedrer          #+#    #+#             */
/*   Updated: 2024/11/24 16:09:06 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "../libft/libft.h"
# include <signal.h>

typedef struct s_minitalk
{
	//server
	int				check;
	unsigned int	len;
	char			*msg;
	unsigned int	index;
	int				bit_count;
	unsigned int	bit_index;
	unsigned int	byte_index;
	unsigned char	byte;
}	t_minitalk;

//server
void	interpret_signal(int sig, siginfo_t *info, void *context);
void	process_signal(int bit, int pid_client);
void	traceroute_server(pid_t pid_client);
void	build_len(t_minitalk *list, int bit, pid_t pid_client, int init);
void	variable_init( t_minitalk *list, int *init);
void	variable_reset(t_minitalk *list, int *init);
void	print_msg(t_minitalk *list, int *init, pid_t pid_client);

//client
void	process_signal_client( int bit, siginfo_t *info, void *context);
void	transmit_len(pid_t pid, int len);
void	transmit_msg(pid_t pid, char *msg, int len);
void	traceroute_client(void);

//error
void	error(int tipe_error);

#endif 