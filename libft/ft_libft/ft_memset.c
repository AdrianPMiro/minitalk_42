/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:57:05 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:21:59 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
int	main(void)
{
	char	str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);
	memset(str + 5, '.', 8 * sizeof(char));
	printf("Real_memset(): %s\n", str);
	ft_memset(str + 5, 'x', 8);
	printf("Mine_memset(): %s", str);
	return (0);
}
*/
/*
	Rellena con "c" bytes, la cantidad de "len"
	len caracteres, dato curioso se puede sumar, 
	numeros a puntero. Devuelve el array "b".
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = b;
	while (i != len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
