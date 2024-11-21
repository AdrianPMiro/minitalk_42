/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:09:35 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/15 18:10:53 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen_gnl(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup_gnl(const char *s)
{
	char	*str;
	size_t	len;

	if (!s || !*s)
		return (NULL);
	len = ft_strlen_gnl(s);
	str = (char *)malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len--)
		str[len] = s[len];
	return (str);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	unsigned char	c1;

	c1 = c;
	if (!s)
		return (NULL);
	if (c1 == '\0')
		return ((char *)(s + ft_strlen_gnl(s)));
	while (*s)
	{
		if (*s == c1)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char	*ft_strjoin_gnl(char *s1, const char *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen_gnl(s1);
	len2 = ft_strlen_gnl(s2);
	result = malloc(len1 + len2 + 1);
	if (!result)
	{
		if (s1)
			free(s1);
		return (NULL);
	}
	result[len1 + len2] = '\0';
	while (len2--)
		result[len1 + len2] = s2[len2];
	while (len1--)
		result[len1] = s1[len1];
	if (s1)
		free(s1);
	return (result);
}
