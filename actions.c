/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:35:15 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 14:50:40 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *src, char stack_name)
{
	int	temp;
	int	temp_flag;

	if ((src->next == NULL) || src == NULL)
		return ;
	temp = src->data;
	temp_flag = src->flag;
	src->data = src->next->data;
	src->flag = src->next->flag;
	src->next->data = temp;
	src->next->flag = temp_flag;
	if (stack_name == 'a')
		write(1, "sa\n", 3);
	if (stack_name == 'b')
		write(1, "sb\n", 3);
}

void	push(t_list **stack_dest, t_list **stack_src, char stack_dest_name)
{
	t_list	*top_src;

	if (stack_src == NULL || *stack_src == NULL)
		return ;
	top_src = *stack_src;
	*stack_src = (*stack_src)->next;
	ft_lstadd_front(stack_dest, top_src);
	if (stack_dest_name == 'a')
		write(1, "pa\n", 3);
	if (stack_dest_name == 'b')
		write(1, "pb\n", 3);
}

void	rotate(t_list **stack, char stack_name)
{
	t_list	*top_stack;

	if ((stack == NULL) || ((*stack)->next == NULL))
		return ;
	top_stack = *stack;
	*stack = (*stack)->next;
	top_stack->next = NULL;
	ft_lstadd_back(stack, top_stack);
	if (stack_name == 'a')
		write(1, "ra\n", 3);
	if (stack_name == 'b')
		write(1, "rb\n", 3);
}

void	reverse_rotate(t_list **stack, char stack_name)
{
	t_list	*temp;

	if ((stack == NULL) || ((*stack)->next == NULL))
		return ;
	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	ft_lstadd_front(stack, (temp->next));
	temp->next = NULL;
	if (stack_name == 'a')
		write(1, "rra\n", 4);
	if (stack_name == 'b')
		write(1, "rrb\n", 4);
}
