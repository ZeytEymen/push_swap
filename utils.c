/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:39:05 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/27 18:08:48 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exception(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	is_full_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			return ;
		i++;
	}
	exception();
}

void	check_duplicates(int data, t_list *list)
{
	while (list != 0)
	{
		if (list->data == data)
			exception();
		list = list->next;
	}
}

void	check_is_numeric(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i] != 0)
	{
		j = 0;
		is_full_space(av[i]);
		while (av[i][j] != '\0')
		{
			if ((ft_isdigit(av[i][j]) || av[i][j] == ' ') || ((av[i][j] == '+'
						|| av[i][j] == '-') && ft_isdigit(av[i][j + 1])))
				j++;
			else
				exception();
		}
		i++;
	}
}

void	create_stack(int argc, char **argv, t_list **stack_a)
{
	int		i;
	int		j;
	int		num;
	t_list	*node;
	char	**tmp_arr;

	i = 1;
	check_is_numeric(argv);
	while (i < argc)
	{
		tmp_arr = ft_split(argv[i], ' ');
		j = 0;
		while (tmp_arr[j] != NULL)
		{
			num = ft_atoi(tmp_arr[j]);
			check_duplicates(num, *stack_a);
			node = ft_lstnew(num, -1);
			ft_lstadd_back(stack_a, node);
			j++;
		}
		free_split(tmp_arr);
		free(tmp_arr);
		i++;
	}
}
