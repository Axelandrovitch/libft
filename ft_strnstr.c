/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:46:05 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/18 16:42:45 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (ft_strlen(little) == 0)
		return ((char *)(big));
	while (big[i] != '\0' && i + little_len <= n)
	{
		if (ft_strncmp(big + i, little, ft_strlen(little)) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	big[] = "Hello my dear friend";
	char	little[] = "dear";

	char	*result_ft = ft_strnstr(big, little, ft_strlen(big));
	printf("correct_pointer: %p, result_pointer %p", big + 9, result_ft);
	return (0);
}
*/
