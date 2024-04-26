/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:04:42 by ekarabud          #+#    #+#             */
/*   Updated: 2023/11/03 14:06:36 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	size_t	dstlen2;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	dstlen2 = dstlen;
	if (!dst && dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] && dstlen + 1 < dstsize)
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (srclen + dstlen2);
}
