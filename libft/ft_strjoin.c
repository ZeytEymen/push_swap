/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:39:52 by ekarabud          #+#    #+#             */
/*   Updated: 2023/11/03 12:36:57 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	location;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	location = 0;
	while (s1[i])
	{
		new[location] = s1[i];
		i++;
		location++;
	}
	i = 0;
	while (s2[i])
	{
		new[location] = s2[i];
		i++;
		location++;
	}
	new[location] = '\0';
	return (new);
}
