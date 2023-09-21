/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:57:25 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/03 16:45:31 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*add;

	if (!lst || !f)
		return (NULL);
	add = 0;
	while (lst)
	{
		newlist = ft_lstnew(f(lst->content));
		if (!newlist)
		{
			ft_lstclear(&add, del);
			return (0);
		}
		ft_lstadd_back(&add, newlist);
		lst = lst ->next;
	}
	return (add);
}
