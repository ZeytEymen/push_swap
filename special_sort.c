/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:42:01 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 18:07:06 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a, int min_f, int max_f)
{
	if ((*stack_a)->flag == max_f)
		rotate(stack_a, 'a');
	else if ((*stack_a)->next->flag == max_f)
		reverse_rotate(stack_a, 'a');
	if (is_sorted(*stack_a, min_f) != 1)
		swap(*stack_a, 'a');
}

void	sort_four(t_list **stack_a, t_list **stack_b, int min_f, int max_f)
{
	if ((*stack_a)->next->flag == min_f)
		swap(*stack_a, 'a');
	else if ((*stack_a)->next->next->flag == min_f)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->flag == min_f)
		reverse_rotate(stack_a, 'a');
	push(stack_b, stack_a, 'b');
	sort_three(stack_a, min_f + 1, max_f);
	push(stack_a, stack_b, 'a');
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next->flag == 0)
		swap(*stack_a, 'a');
	else if ((*stack_a)->next->next->flag == 0)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->flag == 0)
	{
		reverse_rotate(stack_a, 'a');
		reverse_rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->next->flag == 0)
		reverse_rotate(stack_a, 'a');
	push(stack_b, stack_a, 'b');
	sort_four(stack_a, stack_b, 1, 4);
	push(stack_a, stack_b, 'a');
}
