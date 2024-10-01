/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:36:00 by ahetru            #+#    #+#             */
/*   Updated: 2024/10/01 14:59:16 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*
int	main(void)
{
	t_list	*one = ft_lstnew(ft_strdup("first"));
	t_list	*two = ft_lstnew(ft_strdup("second"));
	t_list	*three = ft_lstnew(ft_strdup("third"));

	ft_lstadd_front(&three, two);
	ft_lstadd_front(&two, one);

	ft_lstiter(one, print_content);

	return (0);
}
*/
