/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:34:53 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 15:54:00 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	stack_a_len;

	i = 0;
	stack_a_len = ft_lstsize(*stack_a);
	while (i < stack_a_len && is_sorted(*stack_a, 0) == 0)
	{
		j = 0;
		while (j < stack_a_len)
		{
			if (((*stack_a)->flag >> i) & 1)
				rotate(stack_a, 'a');
			else
				push(stack_b, stack_a, 'b');
			j++;
		}
		while (*stack_b != 0)
			push(stack_a, stack_b, 'a');
		i++;
	}
}