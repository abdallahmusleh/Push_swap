/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:03:39 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/24 17:58:51 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long			content;
	struct s_list	*next;
}					t_list;
long				ft_atolong(const char *nptr);
t_list				*ft_lstnew(long content);
void				ft_lstadd_back(t_list **list, t_list *new);
int					lst_size(t_list *list);
void				lst_clear(t_list **list);
void				pa(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b);
int					main(int argc, char **argv);
void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				rrr(t_list **stack_a, t_list **stack_b);
void				ra(t_list **stack_a);
void				rb(t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b);
void				sa(t_list **stack_a);
void				sb(t_list **stack_b);
void				ss(t_list **stack_a, t_list **stack_b);
int					not_number(char *str[]);
int					invalid_int(long x);
int					issorted(t_list *node);
int					repeatednumber(t_list *list);
void				sort2(t_list **list);
void				sort3(t_list **list);
void				smallest_in_second(t_list **stack_a, t_list **stack_b);
void				smallest_in_third(t_list **stack_a, t_list **stack_b);
void				smallest_in_last(t_list **stack_a, t_list **stack_b);
void				sort4(t_list **stack_a, t_list **stack_b);
void				sort5(t_list **stack_a, t_list **stack_b);
void				sorter(t_list **stack_a);
void				sorter_small(t_list **list);
#endif