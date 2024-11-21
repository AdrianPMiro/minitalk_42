/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:20:09 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:20:37 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int main()
{
	int n;

	n = 5;
    char str[50] = "GeeksForGeeks is for programming geeks.";
    char str2[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore_bzero(): %s\n", str);
	bzero(str2, 5);
    write(1, "Real_bzero(): ", 15);
	write(1, &str2, 50);
	write(1, "\n", 1);
	ft_bzero(str, n);
    write(1, "After_bzero(): ", 15);
	write(1, &str, 50);
    return 0;
}
*/
/*
	Rellena, con "\0" "size" bytes.
*/
void	ft_bzero( void *str, size_t size)
{
	size_t	c;
	char	*a;

	c = 0;
	a = str;
	while (c < size)
	{
		a[c] = '\0';
		c++;
	}
}
