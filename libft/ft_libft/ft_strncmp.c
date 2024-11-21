/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:00:02 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:46 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
int impcmp( int res, int n);

int	main(void)
{
	const char s1[] = "holaa";
	const char s2[] = "holay";
	int n = 5;
	int r_res;
	int ft_res;

	r_res = strncmp(s1, s2, n);
	printf("Funcion Real:");
	impcmp( r_res, n);
	printf( "Valor que devuelve la funcion REAL:%d", r_res);
	printf("\n");

	ft_res = ft_strncmp(s1, s2, n);
	printf("Funcion Propia:");
	impcmp( ft_res, n);
	printf( "Valor que devuelve la funcion mia:%d", ft_res);
	return (0);
}

int impcmp( int res, int n)
{
	if (res == 0) 
	{
        printf(" Las primeras %d letras de s1 son iguales", n);
    }
	else if (res < 0) 
	{
		printf("Las primeras %d letras de s1 son menores que las de s2.\n", n);
    }
	else 
	{
		printf("Las primeras %d letras de s1 son mayores que las de s2.\n", n);
    }

	printf("\n");
    return 0;
 * forma 2
{
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i] &&
			!s1[i+1] && !s2[i+1])
		i++;
	return (s1[i] - s2[i]);
}*/
/*
 * forma 3
{
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}*/
/*
	Compara dos strings, para saber si son iguales, durante n caracteres, 
	si son iguuales devuelve 0 simplemente en el caso de que no, 
	devuelve la diferencia en ascii, de los dos primeros caracteres, 
	detontando una diferencia entre los dos strings.
*/
int	ft_strncmp( const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	if (n == 0)
		return (0);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		else if (ss1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
