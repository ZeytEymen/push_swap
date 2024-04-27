/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:03:11 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 16:39:20 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *stack, int min_flag)
{
	while (stack != NULL)
	{
		if (min_flag == stack->flag)
		{
			stack = stack->next;
			min_flag++;
		}
		else
			return (0);
	}
	return (1);
}
void	sort_stacks(int len, t_list **stack_a, t_list **stack_b)
{
	if (!(is_sorted(*stack_a, 0)))
	{
        if(len == 3 || len == 2)
			sort_three(stack_a, 0, 2);
		else if (len == 4)
		 	sort_four(stack_a, stack_b, 0, 3);
		else if (len == 5)
		 	sort_five(stack_a, stack_b);
		else
	 	    radix_sort(stack_a, stack_b);
	}
}