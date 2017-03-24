/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 17:45:26 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/17 18:41:30 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*head;
	t_list	*tail;

	if (!lst || !*f)
		return (NULL);
	tail = f(lst);
	if ((new = ft_lstnew(tail->content, tail->content_size)))
	{
		head = new;
		lst = lst->next;
		while (lst)
		{
			tail = f(lst);
			if (!(head->next = ft_lstnew(tail->content, tail->content_size)))
				return (NULL);
			head = head->next;
			lst = lst->next;
		}
	}
	return (new);
}
