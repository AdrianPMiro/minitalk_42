/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:22:29 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:33 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
int main(void)
{
	size_t size = 15;
	char dest[20] = "rrrrrrrrrrrrrr";
	char dest2[20] = "rrrrrrrrrrrrrr";
	const char src[] = "lorem ipsum dolor sit amet";

	size_t a = ft_strlcat( dest, src, size);
	printf("%s", dest);
	printf("\n%zu", a);
	size_t b = strlcat( dest2, src, size);
	printf("\n%s", dest2);
	printf("\n%zu", b);
    return (0);
}
*/

/*
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (size == 0 || lend >= size)
		return (lens + size);
	if (size <= lend)
		return (lens + size);
	ft_memcpy(dest + lend, src, size - lend - 1);
	dest[lend + size] = '\0';
	return (lend + lens);
}
*/
/*
	Concatena "src" al final de "dest", se concatenara terminando
	en "NULL" "dest" si size es mayor que len de "dest",
	en todos los casos menos el de error, devuelve las longitudes, de lo que
	se deberia haber concatenado, que seria la longitdes de ambos strings.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	i = 0;
	if (!dest || !src)
		return (0);
	if (size <= lend)
		return (size + lens);
	while (src[i] != '\0' && i < size - lend - 1)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + lens);
}
