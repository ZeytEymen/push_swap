/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:09:53 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/23 12:25:34 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int	*array;
	int	size;
	int	max_index;
	int	max_number;
	int	index_highest;
	int	*sort_index;

}	t_list;

char	**ft_split(char const *s, char c);
int	    ft_atoi(const char *str);

# endif