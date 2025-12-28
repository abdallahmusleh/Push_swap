/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atolong.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:17:04 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/24 18:08:41 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atolong(const char *nptr)
{
	long	i;
	long	x;
	int		sign;
	char	*c;

	i = 0;
	sign = 1;
	x = 0;
	c = (char *)nptr;
	while (c[i] == ' ' || (c[i] >= 9 && c[i] <= 13))
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign = -sign;
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9')
	{
		x = x * 10 + (c[i] - '0');
		i++;
	}
	return (x * sign);
}
