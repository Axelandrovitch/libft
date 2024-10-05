/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:40:40 by ahetru            #+#    #+#             */
/*   Updated: 2024/10/02 17:56:02 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_c(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buff;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && find_c(set, s1[start]))
		start++;
	while (end > start && find_c(set, s1[end - 1]))
		end--;
	buff = malloc(sizeof(char) * (end - start + 1));
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		buff[i++] = s1[start++];
	buff[i] = '\0';
	return (buff);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("trimed: '%s'\n", ft_strtrim("    Hola que ase ?      ", " "));
	return (0);
}
*/
