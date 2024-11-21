/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:13:28 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:37:39 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int main( void )
{
    char *str = "   --1234";
    int rest = atoi(str);
    printf("%d\n", rest);
    int ft_rest = ft_atoi(str);
    printf("%d", ft_rest);
    return (0);
}
*/
/*
	Te pasa un string de numeros a int,
	en el momento en el que encuentra algo diferente
	a un numero para, ademas de que esta preparado para
	numeros negativos y mas.
*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;

	i = 0;
	s = 1;
	if (*nptr == '\0')
		return (0);
	while (*nptr == ' ' || *nptr == '\t'
		|| *nptr == '\n' || *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++ ;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			s = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		i = i * 10 + (*nptr - '0');
		nptr++;
	}
	return (i * s);
}
