/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:06:38 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 16:42:02 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **tmp_arr)
{
	int i;

	i = 0;
	while (tmp_arr[i] != NULL)
	{
		free(tmp_arr[i]);
		i++;
	}
	
}
void free_list(t_list *head) 
{
    t_list *current = head;
    t_list *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
