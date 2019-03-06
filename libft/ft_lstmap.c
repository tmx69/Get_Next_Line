/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rywisozk <rywisozk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 12:04:16 by rywisozk          #+#    #+#             */
/*   Updated: 2018/12/07 18:40:49 by rywisozk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(t_list *list)
{
	t_list *buf;

	while (list)
	{
		buf = list;
		free(list->content);
		free(list);
		list = list->next;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*new;
	t_list	*fresh;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if (!(new = ft_lstnew(temp->content, temp->content_size)))
		return (NULL);
	fresh = new;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		if (!(new->next = ft_lstnew(temp->content, temp->content_size)))
		{
			ft_free(fresh);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	return (fresh);
}
