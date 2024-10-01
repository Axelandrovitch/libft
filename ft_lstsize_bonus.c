/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:49:10 by ahetru            #+#    #+#             */
/*   Updated: 2024/10/01 15:00:10 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*one = ft_lstnew("first");
	t_list	*two = ft_lstnew("second");
	t_list	*three = ft_lstnew("third");
	int	size;

	printf("content of one: %s\n", (char *)one -> content);
	printf("content of two: %s\n", (char *)two -> content);
	printf("content of three: %s\n", (char *)three -> content);
	
	ft_lstadd_front(&three, two);
	ft_lstadd_front(&two, one);
	size = ft_lstsize(one);
	printf("%d", size);
	return (0);
}
*/
