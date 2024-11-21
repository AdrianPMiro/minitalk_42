/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:30:59 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:21:21 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int	ft_isprint(int str);

int	main(void)
{
	int	num;
	int	dat;

	dat = 33;
	num = ft_isprint(dat);
	printf("%d", num);
}
*/
/*
	Compueba que sea caracter imprimible incluido el espacio,
	si es asi imprime 1 si no 0.
*/

int	ft_isprint(int str)
{
	if (str >= 32 && str <= 126)
		return (1);
	return (0);
}
