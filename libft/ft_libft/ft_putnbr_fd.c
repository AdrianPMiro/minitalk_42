/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:34:58 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:10 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_nbr( int c, int fd);
/*
int main(void)
{
	int fd;
	int n = -2147483648;
	fd = open("texto.txt", O_WRONLY);
	if( fd == -1)
	{
		close(fd);
		return(0);
	}
	ft_putnbr_fd( n, fd);
	close(fd);
	return(0);
}*/
/*
	Escribe en el file descriptor el numero "c" dado, 
	para eso tendras que pasa el int a string.
*/

void	ft_putnbr_fd(int n, int fd)
{
	int	tmp;

	tmp = n;
	if (tmp == -2147483648)
	{
		tmp = 147483648;
		write (fd, "-2", 2);
		ft_putnbr_fd(tmp, fd);
	}
	else
	{
		if (tmp < 0)
		{
			tmp = tmp * -1;
			write (fd, "-", 1);
			ft_putnbr_fd(tmp, fd);
		}
		else
			ft_nbr(tmp, fd);
	}
}

void	ft_nbr( int c, int fd)
{
	char	aux;

	if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
	}
	aux = c % 10 + '0';
	write(fd, &aux, 1);
}

/*
void	ft_putnbr_fd(int n, int fd)
{
	char	*imp;
	int		len;

	imp = ft_itoa(n);
	if(imp != NULL)
	{
		len = ft_strlen(imp);
		write(fd, imp, len);
	}
	free(imp);
}
*/
