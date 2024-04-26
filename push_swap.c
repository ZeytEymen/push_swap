/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:26:12 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/25 20:55:14 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
typedef struct s_list
{
	int	*array;
	int	size;
	int	max_index;
	int	max_number;
	int	index_highest;
	int	*sort_index;

}	t_list;*/

/*
	(*arr) = malloc(sizeof(t_list));
	(*arr)->size = endcounter(ac, av);
	(*arr2) = malloc(sizeof(t_list));
	(*arr2)->size = 0;
	(*arr2)->array = malloc(sizeof(int) * (*arr)->size);
	(*arr)->sort_index = malloc(sizeof(int) * (*arr)->size);
	(*arr2)->sort_index = malloc(sizeof(int) * (*arr)->size);
	(*arr)->array = str_atoi(ac, av);*/

// void allocate_stacks(t_list **stack_a, t_list **stack_b, int argc, char **arg)
// {
//     (*stack_a) = malloc(sizeof(t_list));
//     (*stack_a) -> size = end_co
// }
#include <stdio.h>

int	count(char *s, char c)
{
	printf("%s\n",s);
	int	i;
	int	count;
	int	flag;

	flag = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 0;
		else if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	endcounter(int ac, char **av)
{
	int	k;
	int	c;

	k = 0;
	c = 0;
	while (k++ != (ac - 1))
		c += count(av[k], ' ');
	return (c);
}
int count_spaces(char *arg, char ch)
{
	int	i;
	int	count;
	int	flag;

	flag = 0;
	count = 0;
	i = 0;
	while (arg[i])
	{
		if (arg[i] == ch)
			flag = 0;
		else if (arg[i] != ch && flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
}
int arg_count(int ac, char **arg)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (i++ != (ac - 1))
		count += count_spaces(arg[i], ' ');
	return (count);
}

int main(int ac, char **av)
{
    t_list  *stack_a;
    t_list  *stack_b;

	int size = endcounter(ac,av);
	printf("\n\n%d",size);
}