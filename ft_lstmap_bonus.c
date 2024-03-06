/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:15:01 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/17 15:16:01 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elm;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_elm = ft_lstnew(NULL);
		if (!new_elm)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_elm->content = f(lst->content);
		ft_lstadd_back(&new_list, new_elm);
		lst = lst->next;
	}
	return (new_list);
}
