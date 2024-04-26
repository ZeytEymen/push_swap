/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:26:51 by ekarabud          #+#    #+#             */
/*   Updated: 2024/04/26 23:02:42 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int data, int flag)
{
	t_list	*list_ptr;

	list_ptr = (t_list *)malloc(sizeof(t_list));
	(*list_ptr).data = data;
	(*list_ptr).flag = flag;
	(*list_ptr).next = NULL;
	return (list_ptr);
}
