/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:08:04 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 14:16:02 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void values_to_flag(t_list **stack)
{
    int		min;
	int		stack_len;
	int		flag_num;
	t_list	*temp;
	t_list	*min_node;

	flag_num = 0;
	stack_len = ft_lstsize(*stack);
	while (flag_num < stack_len)
	{
		temp = *stack;
		min = INT_MAX;
		while (temp != NULL)
		{
			if (((temp->data) <= min) && (temp->flag == -1))
			{
				min = temp->data;
				min_node = temp;
			}
			temp = temp->next;
		}
		min_node->flag = flag_num;
		flag_num++;
	}
}