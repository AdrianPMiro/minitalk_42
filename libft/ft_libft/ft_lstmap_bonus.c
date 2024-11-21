/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:39:01 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/15 18:18:47 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*t_tmp;
	void	*vtmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result = NULL;
	while (lst)
	{
		vtmp = (*f)(lst->content);
		t_tmp = ft_lstnew(vtmp);
		if (!t_tmp)
		{
			del(vtmp);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, t_tmp);
		lst = lst->next;
	}
	return (result);
}
