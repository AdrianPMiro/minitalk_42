/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:44:06 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 19:06:31 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_str_function(va_list args, int *res)
{
	char	*string;

	string = va_arg(args, char *);
	if (string)
	{
		ft_putstr(string);
		*res += ft_strlen(string);
	}
	else
	{
		write(1, "(null)", 6);
		*res += 6;
	}
}
