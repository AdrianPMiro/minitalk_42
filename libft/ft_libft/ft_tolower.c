/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:40:43 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:23:12 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int	main( void)
{
	int	lowcase;

	lowcase = 'A';
	printf("%c", ft_tolower(lowcase));
}*/
/*
	Si el caracter "c" es mayuscula lo pasa a mayuscula y lo devuelve.
*/

int	ft_tolower( int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
