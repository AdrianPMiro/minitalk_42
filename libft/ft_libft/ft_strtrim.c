/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:36:46 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:57 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int	main(void)
{
	char const *s1 = "goggogoTengoxxgoxx sueigotgogogogg";
	char const *set = "go";
	char *imp;
	
//	imp = ft_strtrim(s1, set);
//	printf("Resultado: %s", imp);
	printf("Prueba: %s", ft_strtrim(s1, set));
	free(0);
	return(0);
}*/
/*
	Recorta el strign "s1" al princpio y al final
	con los caracteres metidos en set.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (len > i && ft_strchr(set, s1[len - 1]) != NULL)
		len--;
	return (ft_substr(s1, i, len - i));
}
