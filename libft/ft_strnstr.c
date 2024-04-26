/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:08:34 by ekarabud          #+#    #+#             */
/*   Updated: 2023/11/03 14:40:36 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ndl;
	size_t	i;

	if (needle[0] == 0)
		return ((char *)haystack);
	if (!len)
		return (0);
	ndl = ft_strlen(needle);
	i = 0;
	while (*haystack != '\0' && i <= len - ndl)
	{
		if (len < ndl)
			return (0);
		if (ft_strncmp(haystack, needle, ndl) == 0)
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (0);
}
