/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percentage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:51:37 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 19:05:51 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_percentage(const char *format, va_list args, int *res)
{
	if (*format == 'd' || *format == 'i')
		ft_num_function(args, res);
	else if (*format == 's')
		ft_str_function(args, res);
	else if (*format == 'c')
		ft_char_function(args, res);
	else if (*format == '%')
		ft_percentage_function(res);
	else if (*format == 'u')
		ft_unsignednum_function(va_arg(args, unsigned int), res);
	else if (*format == 'x')
		ft_hexa_function(va_arg(args, unsigned int), res, 0);
	else if (*format == 'X')
		ft_hexa_function(va_arg(args, unsigned int), res, 1);
	else if (*format == 'p')
		ft_pointhexa(args, res);
	format++;
}
