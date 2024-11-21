/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:58:47 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:21:46 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int main() {
    unsigned char s[] = "hola pesicola";
    int c;
    size_t n;
    void *result;
    void *result2;

    c = 'c';
    n = 4;
    result = memchr(s, c, n);
    printf("Funcion Real: %p\n", result);
    result2 = ft_memchr(s, c, n);
    printf("Funcion mia: %p\n", result2);
    return 0;

}*/
/*
	Localiza la primera aparicion de c, convertido en "c", 
	convertida a "unsigned char", en la cadena "s".
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i != n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
