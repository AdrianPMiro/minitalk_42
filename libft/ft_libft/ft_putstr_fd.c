/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:05:45 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:14 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
int main(void)
{
	int fd;
	char *s = "hola buenas :D";
	fd = open("texto.txt", O_WRONLY);
	if(fd == -1)
	{
		close(fd);
	}
	ft_putstr_fd(s, fd);
	close(fd);
	return(0);
}
*/
/*
	Escribe en el file descriptor esepcificado, 
	el string "s".
*/

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
