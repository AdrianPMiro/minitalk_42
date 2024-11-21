/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:41:54 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:23:16 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int	main( void)
{
	int	lowcase;

	lowcase = 'A';
	printf("%c", ft_toupper(lowcase));
}*/
/*
	Si el caracter "c" es minuscula, lo pasa a mayuscula.
*/

int	ft_toupper( int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
