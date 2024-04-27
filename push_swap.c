/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:26:12 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 18:11:33 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac > 1)
	{
		create_stack(ac, av, &stack_a);
		values_to_flag(&stack_a);
		sort_stacks(ft_lstsize(stack_a), &stack_a, &stack_b);
		free_list(stack_a);
		free_list(stack_b);
	}
	return (0);
}