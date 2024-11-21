/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:02:54 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 19:05:42 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_char_function(va_list args, int *res)
{
	char	c;

	c = (char)va_arg(args, int);
	ft_putchar(c);
	(*res)++;
}
