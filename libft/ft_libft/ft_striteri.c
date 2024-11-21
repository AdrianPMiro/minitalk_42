/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:29:46 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/15 18:10:31 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
void f( unsigned int i, char *c);

int main(void)
{
	char str[] = "abcd efgh";
	ft_striteri( str, f);
	return(0);
}

void f( unsigned int i, char *c)
{
	c[i] += 1;
}
*/
/*
	Le pasa al string "s", la la función "f",
	a cada uno de los caraceteres de "s".
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
