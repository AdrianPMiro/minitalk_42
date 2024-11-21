/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:31:19 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:42 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
char f(unsigned int i, char c);

int main(void)
{
    char *str = "abcd efgh";
    char *str2 = ft_strmapi(str, *f);
    printf("%s\n", str2);
    free(str2);
    return (0);
}

char f(unsigned int i, char c)
{
	char carct;
	carct = c + 1;
	return (carct);
}*/
/*
	Crea una nueva string, donde es la resultante de pasarle la función
	"f", a la cadena "s".
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
