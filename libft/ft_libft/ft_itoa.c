/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:24:45 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/15 18:20:00 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itoa(int n)
{
	long	len;
	long	nb;
	char	*result;

	nb = n;
	len = ft_intlen(nb);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (0);
	*result = '+';
	if (nb < 0)
	{
		*result = '-';
		nb *= -1;
	}
	result[len] = '\0';
	len--;
	while (len - (*result == '-') >= 0)
	{
		result[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (result);
}
