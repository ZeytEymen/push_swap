/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:36:14 by ekarabud          #+#    #+#             */
/*   Updated: 2023/10/25 14:39:36 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src || !n)
	{
		return (dst);
	}
	while (i < n)
	{
		(*(unsigned char *)dst) = (*(unsigned char *)src);
		dst++;
		src++;
		i++;
	}
	dst -= i;
	return (dst);
}
