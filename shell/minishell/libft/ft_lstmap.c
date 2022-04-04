/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:47:40 by dpunishe          #+#    #+#             */
/*   Updated: 2022/01/28 19:56:26 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*aux_lst;

	if (!lst || !f)
		return (NULL);
	aux_lst = ft_lstnew(f(lst->content));
	if (!aux_lst)
		return (NULL);
	new_lst = aux_lst;
	lst = lst->next;
	while (lst)
	{
		aux_lst->next = ft_lstnew(f(lst->content));
		if (!aux_lst->next)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		aux_lst = aux_lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
