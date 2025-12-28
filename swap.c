/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/12/20 17:54:54 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/20 17:54:54 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack)
{
	int	tmp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
