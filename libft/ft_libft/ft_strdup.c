/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:15:33 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:24 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int main(void)
{
    const char *s = "AdrianHokage";
    char *str1;
    char *str2;
    
    str1 = strdup(s);
    printf("Funcion real: %s\n", str1);
    str2 = ft_strdup(s);
    printf("Funcion mine: %s", str2);
    return(0);
}
*/
/*
	Duplica el string de "s" en "str" creado manual manualmente.
*/
char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (len--)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
