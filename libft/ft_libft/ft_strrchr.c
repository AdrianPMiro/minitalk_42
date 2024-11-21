/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:46:24 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:55 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int main(void)
{
	int	c;	
	const char s[] = "hola pepito";
	
	c = 'o';	
	printf("%s", ft_strrchr(s, c));	
}*/
/*
	Encuentra la ultima aparición de el caracater "c", 
	devuelve "s", desde donde lo encuentra. 
*/

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c1;
	size_t			len;

	c1 = c;
	len = ft_strlen(s);
	if (c1 == '\0')
		return ((char *)(s + len));
	len = ft_strlen(s);
	s += len;
	while (len > 0)
	{
		if (*s == c1)
			return ((char *)s);
		s--;
		len--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
