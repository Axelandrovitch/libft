/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:01:14 by ahetru            #+#    #+#             */
/*   Updated: 2024/10/01 14:59:57 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*buff;

	buff = malloc(sizeof(t_list));
	if (buff == NULL)
		return (NULL);
	buff -> content = content;
	buff -> next = NULL;
	return (buff);
}
