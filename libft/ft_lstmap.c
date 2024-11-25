/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:43:24 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 22:58:17 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Maps a function to each element of a linked list and creates a new list.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resultlist;
	t_list	*templist;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	resultlist = NULL;
	while (lst)
	{
		content = f(lst->content);
		templist = ft_lstnew(content);
		if (!templist)
		{
			ft_lstclear(&resultlist, del);
			del(content);
			return (0);
		}
		ft_lstadd_back(&resultlist, templist);
		lst = lst->next;
	}
	return (resultlist);
}
