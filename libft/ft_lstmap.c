/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:55:13 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_del(void *content, size_t content_size)
{
	if (content && content_size)
		free(content);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*lstnew;
	t_list		*lst_prev;
	t_list		*lst_tmp;

	if (!(lst && f))
		return (NULL);
	if ((lstnew = ft_lstnew(f(lst)->content, f(lst)->content_size)))
	{
		lst = lst->next;
		lst_prev = lstnew;
		while (lst)
		{
			if (!(lst_tmp = ft_lstnew(f(lst)->content,
							f(lst)->content_size)))
			{
				ft_lstdel(&lstnew, &ft_del);
				return (NULL);
			}
			lst_prev->next = lst_tmp;
			lst_prev = lst_tmp;
			lst = lst->next;
		}
	}
	return (lstnew);
}
