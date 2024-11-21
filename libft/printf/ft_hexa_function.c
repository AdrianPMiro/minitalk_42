/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:08:20 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 19:05:45 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_hexa_function(unsigned long num, int *res, int is_uppercase)
{
	char	*hex_digits;

	if (is_uppercase)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	if (num >= 16)
		ft_hexa_function(num / 16, res, is_uppercase);
	ft_putchar(hex_digits[num % 16]);
	(*res)++;
}

void	ft_pointhexa(va_list args, int *res)
{
	unsigned long	ptr;

	ptr = (unsigned long)va_arg(args, void *);
	ft_putstr("0x");
	(*res) += 2;
	ft_hexa_function(ptr, res, 0);
}
