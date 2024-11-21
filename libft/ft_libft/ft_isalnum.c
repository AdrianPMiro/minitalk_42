/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:09:30 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:20:52 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*

int	ft_isalnum(int str);

int	main(void)
{
	int	num;

	char	dat[] = "a9a";
	num = ft_isalnum(dat);
	printf("%d", num);
}
*/
/*
	Comprueba que que sea alfanumerico, 
	si es asi imprime 1 de lo contrario imprime 0.
*/

int	ft_isalnum(int str)
{
	if (!((str >= 'A' && str <= 'Z')
			|| (str >= 'a' && str <= 'z')
			|| (str >= '0' && str <= '9')))
		return (0);
	return (1);
}
