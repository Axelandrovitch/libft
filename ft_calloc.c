/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:46:55 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/23 19:04:33 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		*(unsigned char *)ptr = 0;
		return (ptr);
	}
	if (size != 0 && (nmemb > (size_t) -1 / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
