/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/12/20 17:54:13 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/20 17:54:13 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*primary;
	t_list	*tmp;

	if (!stack_b || !*stack_b)
		return ;
	primary = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp = *stack_a;
	primary->next = tmp;
	*stack_a = primary;
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*primary;
	t_list	*tmp;

	if (!stack_a || !*stack_a)
		return ;
	primary = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp = *stack_b;
	primary->next = tmp;
	*stack_b = primary;
	write(1, "pb\n", 3);
}
