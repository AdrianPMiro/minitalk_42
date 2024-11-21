/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:02:46 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:21:50 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int	main(void)
{

	const char	src[] = "GeeksForGeeks is for programming geeks.";
	const char	src2[] = "GeeksForGeeks is for programming geeks.";
	char 	dst[sizeof(src)];
	char 	dst2[sizeof(src2)];

	memcpy(dst, src, sizeof(src));
	printf("Real_memcpy_src(): %s\n", src);
	printf("Real_memcpy_dst(): %s\n", dst);
	ft_memcpy(dst2, src2, sizeof(src2));
	printf("Mine_memcpy_src2(): %s\n", src2);
	printf("Mine_memcpy_dst2(): %s", dst2);
	return (0);
}*/
/*
	Copia "n" bytes, desde el "dst" al "src", devuelve "d". 
*/

void	*ft_memcpy( void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n--)
	{
		d[n] = s[n];
	}
	return (d);
}
