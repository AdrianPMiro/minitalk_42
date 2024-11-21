/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:09:30 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:21:01 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int str);
/*
int	main(void)
{
	int	num;
	int	dat;

	dat = 'a';
	num = ft_isalpha(dat);
	printf("%d", num);
}
*/
/*
	Si la funcion detecta un caracter en minusculas,
	imprime 1, de lo contrario devuelve 0.
*/

int	ft_isalpha(int str)
{
	if (!((str >= 'A' && str <= 'Z')
			|| (str >= 'a' && str <= 'z' )))
		return (0);
	return (1);
}
