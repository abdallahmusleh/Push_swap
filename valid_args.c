/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:03:33 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/24 18:00:51 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	not_number(char *str[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[i])
	{
		j = 0;
		if (j == 0 && (str[i][j] == '-' || str[i][j] == '+'))
			j++;
		if (!str[i][j])
			return (1);
		while (str[i][j])
		{
			if (str[i][j] < '0' || str[i][j] > '9')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	invalid_int(long x)
{
	if (x > INT_MAX)
		return (1);
	if (x < INT_MIN)
		return (1);
	return (0);
}

int	issorted(t_list *node)
{
	if (!node)
		return (1);
	while (node->next)
	{
		if ((node->content) > (node->next->content))
			return (0);
		node = node->next;
	}
	return (1);
}

int	repeatednumber(t_list *list)
{
	t_list	*tmp;

	while (list)
	{
		tmp = list->next;
		while (tmp)
		{
			if (list->content == tmp->content)
				return (1);
			tmp = tmp->next;
		}
		list = list->next;
	}
	return (0);
}
