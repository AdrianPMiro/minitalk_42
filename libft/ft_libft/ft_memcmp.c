/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:00:49 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:21:48 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int main(void)
{
    char s1[] = "hala";
    char s2[] = "hcllo";
    int n = 5;

    int result = memcmp(s1, s2, n);
    printf("Resultado Real:     %d\n", result);
    int result2 = ft_memcmp(s1, s2, n);
    printf("Resultado Propio:   %d\n", result2);
 
    return (0);
}*/
/*
	Compara los n primeros bytes, de "s1" y de "s2", para saber si son iguales, 
	devuelve la diferencia en assci del primer caracter diferente. 
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
