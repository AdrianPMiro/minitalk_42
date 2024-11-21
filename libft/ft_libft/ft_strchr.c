/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:59:41 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:21 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
char *ft_strchr(const char *s, int c);

int main(void)
{
	int	c;	
	const char s[] = "hola pepito";
	
	c = 'p';	
	printf("%s", ft_strchr(s, c));	
}
*/
/*
	Compueba en un array, la primera aparicion de el caracter "c", 
	y devulve el "s" desde conde lo encuentra.
*/
char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;

	c1 = c;
	if (c1 == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == c1)
			return ((char *)s);
		s++;
	}
	return (0);
}
