/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:56:35 by belkarto          #+#    #+#             */
/*   Updated: 2022/10/18 16:36:54 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		len;
	int		i;
	t_list	*new;
	t_list	*tmp;
	t_list	*tmp_new;

	i = 0;
	tmp = lst;
	new = ft_lstnew(f(tmp->content));
	if (!new || !del || !f)
		return (NULL);
	len = ft_lstsize(lst);
	tmp = tmp->next;
	tmp_new = new;
	while (tmp)
	{
		ft_lstadd_back(&tmp_new, ft_lstnew(f(tmp->content)));
		if (!new)
			ft_lstclear(&new, del);
		tmp = tmp->next;
		tmp_new = tmp_new->next;
		i++;
	}
	return (new);
}
