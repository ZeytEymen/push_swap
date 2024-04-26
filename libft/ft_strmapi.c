/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:40:42 by ekarabud          #+#    #+#             */
/*   Updated: 2023/11/03 12:39:42 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	f_i;

	f_i = 0;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (NULL);
	if (!s)
		return (NULL);
	while (s[f_i])
	{
		ret[f_i] = f(f_i, s[f_i]);
		f_i++;
	}
	ret[f_i] = '\0';
	return (ret);
}
