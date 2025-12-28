/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/12/20 17:54:31 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/20 17:54:31 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	tmp2 = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
	while (tmp2->next != tmp)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
