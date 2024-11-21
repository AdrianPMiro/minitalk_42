/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednum_function.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:43:16 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 19:05:58 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_unsignednum_function(unsigned int nbr, int *res)
{
	if (nbr <= 9)
	{
		ft_putchar(nbr + '0');
		(*res)++;
	}
	else
	{
		ft_unsignednum_function(nbr / 10, res);
		ft_putchar(nbr % 10 + '0');
		(*res)++;
	}
}
