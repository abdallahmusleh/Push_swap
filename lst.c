/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:27:36 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/24 18:10:06 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(long content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	if (!list || !new)
		return ;
	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int	lst_size(t_list *list)
{
	int	i;

	i = 1;
	if (!list)
		return (0);
	while (list->next)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	lst_clear(t_list **list)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!list || !*list)
		return ;
	tmp1 = *list;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
	*list = NULL;
}
