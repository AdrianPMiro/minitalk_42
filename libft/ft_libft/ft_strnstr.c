/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:32:16 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:50 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
int	main(void)
{
    const char str[] = "Que buena esta la tortilla de patata";
    const char to_find[] = "esta";
    size_t n = 30;

    char *propia = ft_strnstr(str, to_find, n);
    if (propia == NULL)
        printf("Subcadena no encontrada.\n");
    else 
        printf("%s\n", propia);
    return(0);
}*/
/*
	Busca en la cadena "big", durante "len" caracteres, la cadena "small",
	si la encuentra devuelve big por donde encuentra "small".
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (!*little)
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] && i + little_len <= len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (j == little_len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
