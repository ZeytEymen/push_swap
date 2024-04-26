/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:25:24 by ekarabud          #+#    #+#             */
/*   Updated: 2023/11/03 12:31:43 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	x;

	x = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		x++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		size;
	int		i;

	size = get_size(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ret = malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	i = size;
	if (n < 0)
	{
		ret[0] = '-';
		n = -n;
	}
	while (n != 0 && i--)
	{
		ret[i] = (char)((n % 10) + '0');
		n = (n / 10);
	}
	ret[size] = '\0';
	return (ret);
}
