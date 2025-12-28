/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/12/20 17:54:46 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/20 17:54:46 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*primary;
	t_list	*tmp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	primary = *stack;
	*stack = (*stack)->next;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = primary;
	primary->next = NULL;
}

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
