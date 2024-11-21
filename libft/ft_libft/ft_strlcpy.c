/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:25:04 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:35 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
int main(void)
{
    char src[] = "Hola";
    char dest[5];

    size_t result = ft_strlcpy(dest, src, 4));

    printf("Custom:   %s, Len: %zu\n", dest, result);

    return 0;
}
*/
/*
	Copia en "dest", el "src", "size" bytes, 
	en el caso de que size sea mayor que len, solo compiara len
	que es la longitud total de "src".
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = (ft_strlen(src));
	if (size == 0)
		return (len);
	if (--size < len)
	{
		ft_memcpy(dest, src, size);
		dest[size] = '\0';
	}
	else
	{
		ft_memcpy(dest, src, len);
		dest[len] = '\0';
	}
	return (len);
}
