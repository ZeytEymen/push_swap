/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:23:29 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/26 23:04:40 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sp_op_control(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\v' || ch == '\f'
		|| ch == '\r' || ch == '+' || ch == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] && sp_op_control(str[i]))
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = sign * -1;
			i++;
			break ;
		}
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
		result = (result * 10) + (str[i++] - '0');
	if (sign * result < INT_MIN || sign * result > INT_MAX)
		write(2, "ERROR\n", 6);
	return (result * sign);
}
