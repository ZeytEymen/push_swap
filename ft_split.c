/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:09:39 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/23 12:15:44 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	sep_count(char const *s, char c)
{
	int	i;
	int	sep;

	i = 0;
	sep = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != '\0' && s[i - 1] != c)
			sep++;
		i++;
	}
	if (s[i - 1] != c)
		sep++;
	return (sep);
}

static int	substr_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		spl_i;

	spl_i = 0;
	split = malloc(sizeof(char *) * (sep_count(s, c) + 1));
	if (!s || !split)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		split[spl_i] = ft_substr(s, 0, (size_t)substr_count(s, c));
        if (!split[spl_i])
            return (NULL);
		spl_i++;
		s += substr_count(s, c);
	}
	split[spl_i] = NULL;
	return (split);
}