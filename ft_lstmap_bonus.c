/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:53:35 by ahetru            #+#    #+#             */
/*   Updated: 2024/10/01 14:59:44 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*lst_to_add;

	new_lst = NULL;
	if (lst == NULL || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		lst_to_add = ft_lstnew(f(lst -> content));
		if (lst_to_add == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, lst_to_add);
		lst = lst -> next;
	}
	return (new_lst);
}
/*
#include <stdio.h>

void	*duplicate_content(void *content)
{
	return (ft_strdup((char *)content));
}

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list *lst;
	t_list *new_lst;

	lst = ft_lstnew(ft_strdup("First"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Second")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Third")));

	new_lst = ft_lstmap(lst, duplicate_content, free);

	ft_lstiter(new_lst, print_content);

	ft_lstclear(&lst, free);
	ft_lstclear(&new_lst, free);

	return (0);
}
*/
