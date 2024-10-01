/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:43:54 by ahetru            #+#    #+#             */
/*   Updated: 2024/10/01 14:58:37 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	current = *lst;
	if (lst == NULL || !del)
		return ;
	while (current != NULL)
	{
		next_node = current -> next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*one = ft_lstnew(ft_strdup("first"));
	t_list	*two = ft_lstnew(ft_strdup("second"));
	t_list	*three = ft_lstnew(ft_strdup("third"));

	ft_lstadd_front(&three, two);
	ft_lstadd_front(&two, one);

	ft_lstclear(&one, free);

	if (one == NULL)
		printf("All nodes correctly deleted");
	else
		printf("Nodes are not correctly deleted\n");

	return (0);
}
*/
