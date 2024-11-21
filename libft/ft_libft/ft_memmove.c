/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:32:31 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:21:55 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int	main( void)
{
	const char	src[] = "GeeksForGeeks is for programming geeks.";
	const char	src2[] = "GeeksForGeeks is for programming geeks.";
	char	dst[sizeof(src)];
	char	dst2[sizeof(src2)];

	memmove(src, &src[1], 6);
	printf("Real_memmove_src(): %s\n", src);
	printf("Real_memmove_dst(): %s\n", dst);
	ft_memmove(src2, &src2[1], 6);
	printf("Mine_memmove_src2(): %s\n", src2);
	printf("Mine_memmove_dst2(): %s", dst2);
	return (0);
}
*/
/*
	Es como el memcpy, pero mas seguro, ya que te ayuda 
	a que no se superponga.  
*/

void	*ft_memmove( void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (n == 0)
		return (d);
	if (dst < src)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	if (dst > src)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dst);
}
