/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:44:07 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:03 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
int main(void)
{
	char c = 'a';
	int fd;

	fd = open("texto.txt", O_WRONLY);
	if(fd == -1)
	{
		close(fd);
		return(0);
	}
	ft_putchar_fd( c, fd);
	close(fd);
	return(0);	
}
*/
/*
	Envia el caracter "c" el file descriptor especificado.
*/
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
