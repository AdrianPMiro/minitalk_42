/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:27:48 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:21:13 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*


int ft_isdigit(int dig);
int main(void)
{
	int dig = 87;
	int num = ft_isdigit(dig) ;
	printf("%d", num);
}*/
/*
	Si la funcion detecta que que sea un digito, 
	si es asi imprime 1 de lo contrario imprime 0.
*/

int	ft_isdigit(int dig)
{
	if (dig >= '0' && dig <= '9')
	{
		return (1);
	}
	return (0);
}
