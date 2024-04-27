/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:09:53 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 16:47:20 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
void	free_split(char **tmp_arr);
void    free_list(t_list *head);
void    exception();
void    check_is_numeric(char **av);
void	check_duplicates(int data, t_list *list);
void	is_full_space(char *str);
void	create_stack(int argc, char **argv, t_list **stack_a);
void    values_to_flag(t_list **stack);
void	swap(t_list *src, char stack_name);
void	push(t_list **stack_dest, t_list **stack_src, char stack_dest_name);
void	rotate(t_list **stack, char stack_name);
void	reverse_rotate(t_list **stack, char stack_name);

void	sort_stacks(int len, t_list **stack_a, t_list **stack_b);
int	    is_sorted(t_list *stack, int min_flag);
void	sort_three(t_list **stack_a, int min_f, int max_f);
void	sort_four(t_list **stack_a, t_list **stack_b, int min_f, int max_f);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
# endif