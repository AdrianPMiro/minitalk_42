/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:33:13 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/15 18:19:06 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*result;

	if (lst != NULL && new != NULL)
	{
		if (*lst != NULL)
		{
			result = ft_lstlast(*lst);
			result->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
