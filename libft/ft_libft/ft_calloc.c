/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:09:43 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:20:45 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
int	impc (int *arr);
int imp0 ( int *arr);

int main() {
    int elem = 5;
    int *array;
	int *array2;

    array = (int *)calloc(elem, sizeof(int));
    array2 = (int *)ft_calloc(elem, sizeof(int));
    if (array == NULL || array2 == NULL) {
		printf("Error! memory not allocated.");
		return (0);
    printf("Array real After: ");
	imp0 (array);
    printf("Array real Before: ");
	impc (array);
    printf("Array mine After: ");
	imp0 (array2);
    printf("Array mine Before: ");
	impc (array2);
	return(0);
}

int imp0 ( int *arr)
{
	int i = 0;
	while( i != 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return(0);
}

int	impc ( int *arr)
{
    int i = 4;
    while (i != -1) 
	{
        arr[i] = i + 1;

        printf("%d ", arr[i]);
        i--;
    }
	printf("\n");
    free(arr);
    return (0);
}
*/
/*
	Crea un malloc, de "count" el numero de caracacteres,
	siendo "size" el tamaño de cada caracter.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (0);
	ret = malloc(count * size);
	if (ret == NULL)
		return (0);
	ft_bzero(ret, count * size);
	return (ret);
}
