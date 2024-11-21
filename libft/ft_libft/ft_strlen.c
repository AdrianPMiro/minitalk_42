/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:48:15 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:40 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
int main(void)
{
	size_t print;
	const char a[] = "hola";
	print = ft_strlen(a);
	printf("%zu", print);
	return (0);
}
*/
/*
	Cuenta el numero de caracteres de la cadena apuntada
	por str, devulve un size_t del mismo
	[str] Es la longitud de la cadena que vamos a contar.
*/
size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
