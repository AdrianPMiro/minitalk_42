/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:27:03 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:07 by adpedrer         ###   ########.fr       */
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
		return(0);
	}
	ft_putendl_fd(s, fd);
	close(fd);
	return(0);
}
*/
/*
	Escribe en el fd especificado, el string "s", con un salto de linea al final.
*/
void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
