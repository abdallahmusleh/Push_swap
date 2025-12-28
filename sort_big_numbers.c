/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:31:26 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/24 18:14:56 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*convert_to_indices_helper(t_list *list)
{
	t_list	*tmp_list;
	t_list	*tmp_list2;
	int		*arr;
	int		i;
	int		j;

	j = 0;
	arr = malloc(lst_size(list) * sizeof(int));
	if (!arr)
		return (0);
	tmp_list = list;
	while (tmp_list)
	{
		i = 0;
		tmp_list2 = list;
		while (tmp_list2)
		{
			if (tmp_list->content > tmp_list2->content)
				i++;
			tmp_list2 = tmp_list2->next;
		}
		arr[j++] = i;
		tmp_list = tmp_list->next;
	}
	return (arr);
}

static void	convert_to_indices(t_list **list, int *arr)
{
	int		j;
	t_list	*listtmp;

	j = 0;
	listtmp = *list;
	arr = convert_to_indices_helper(*list);
	while (listtmp)
	{
		listtmp->content = arr[j];
		j++;
		listtmp = listtmp->next;
	}
	free(arr);
}

static void	sorting_helper(t_list **stack_a, t_list **stack_b, int size,
		int maximumbits)
{
	int	i;
	int	j;

	i = 0;
	while (i < maximumbits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->content >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}

void	sorter(t_list **stack_a)
{
	int		size;
	int		maximumbits;
	t_list	*stack_b;
	int		*arr;

	stack_b = NULL;
	size = lst_size(*stack_a);
	maximumbits = 0;
	arr = NULL;
	convert_to_indices(stack_a, arr);
	while ((size - 1) >> maximumbits)
		maximumbits++;
	sorting_helper(stack_a, &stack_b, size, maximumbits);
}
