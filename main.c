/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:06:06 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/24 17:59:55 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	lst_input(int argc, char **argv, t_list **list_a, t_list *node)
{
	int		i;
	long	value;

	i = 1;
	while (i < argc)
	{
		value = ft_atolong(argv[i]);
		if (invalid_int(value) == 1)
		{
			lst_clear(list_a);
			return (0);
		}
		node = ft_lstnew(value);
		if (!node)
		{
			lst_clear(list_a);
			return (0);
		}
		ft_lstadd_back(list_a, node);
		i++;
	}
	return (1);
}

static int	sort_by_size(t_list **list_a)
{
	if (issorted(*list_a) || lst_size(*list_a) == 1)
	{
		lst_clear(list_a);
		return (0);
	}
	if (lst_size(*list_a) <= 5)
		sorter_small(list_a);
	else
		sorter(list_a);
	lst_clear(list_a);
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*node;

	node = NULL;
	list_a = NULL;
	if (argc <= 1)
		return (0);
	if (not_number(argv) == 1)
		return (write(2, "Error\n", 6));
	if (!lst_input(argc, argv, &list_a, node))
		return (write(2, "Error\n", 6));
	if (repeatednumber(list_a) == 1)
	{
		lst_clear(&list_a);
		return (write(2, "Error\n", 6));
	}
	sort_by_size(&list_a);
	return (0);
}
