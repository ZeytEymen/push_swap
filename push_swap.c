/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:26:12 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/26 23:08:04 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
void free_list(t_list *head) {
    t_list *current = head;
    t_list *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
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
	printf("full_space");
	//exception();
}
void	check_duplicates(int data, t_list *list)
{
	while (list != 0)
	{
		if (list->data == data)
				printf("dup");

			//exception();
		list = list->next;
	}
}

void check_is_numeric(char **av)
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
			if (!((ft_isdigit(av[i][j]) || ft_isdigit(av[i][j + 1]))|| av[i][j] == ' '|| av[i][j] == '-'))
				exception();
			j++;
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
	(void)stack_a;
	i = 1;
	check_is_numeric(argv);
	while (i < argc)
	{
		tmp_arr = ft_split(argv[i], ' ');
		j = 0;
		while (tmp_arr[j] != NULL)
		{
			num = ft_atoi(tmp_arr[j]);
			printf("%d\n",num);
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

int main(int ac, char **av)
{
	t_list *stack_a;
	//t_list *stack_b;
	
	if (ac > 1)
	{
		create_stack(ac, av, &stack_a);
		free_list(stack_a);
	}
}
__attribute__((destructor))
static void test(void)
{
	system("leaks push_swap");
}