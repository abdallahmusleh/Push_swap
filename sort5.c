/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:19:52 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/24 18:13:29 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	smallest_in_second_to_last(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rra(stack_a);
	pb(stack_a, stack_b);
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	long	first;
	long	second;
	long	third;
	long	fourth;
	long	fifth;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	fourth = (*stack_a)->next->next->next->content;
	fifth = (*stack_a)->next->next->next->next->content;
	if (first < second && first < third && first < fourth && first < fifth)
		pb(stack_a, stack_b);
	else if (first > second && second < third && second < fourth
		&& second < fifth)
		smallest_in_second(stack_a, stack_b);
	else if (first > third && second > third && third < fourth && third < fifth)
		smallest_in_third(stack_a, stack_b);
	else if (fifth < first && fifth < second && fifth < third && fifth < fourth)
		smallest_in_last(stack_a, stack_b);
	else if (fourth < first && fourth < second && fourth < third
		&& fifth > fourth)
		smallest_in_second_to_last(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sorter_small(t_list **list)
{
	int		i;
	t_list	*stack_b;

	stack_b = NULL;
	i = lst_size(*list);
	if (i == 2)
		sort2(list);
	else if (i == 3)
		sort3(list);
	else if (i == 4)
		sort4(list, &stack_b);
	else
		sort5(list, &stack_b);
}
