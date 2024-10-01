/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:40:40 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/19 17:12:57 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	memory_size(char const *s1, char const *set, size_t s_len)
{
	size_t	count;
	size_t	i;
	size_t	j;

	count = 0;
	i = 0;
	while (set[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (set[i] == s1[j])
				count ++;
			j++;
		}
		i++;
	}
	return (s_len - count);
}

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
	size_t	s1_len;
	size_t	len;
	char	*buff;
	char	*start;

	s1_len = ft_strlen(s1);
	len = memory_size(s1, set, s1_len);
	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return (NULL);
	start = buff;
	while (*s1)
	{
		if (find_c(set, *s1) == 0)
		{
			*buff = *s1;
			buff++;
		}
		s1++;
	}
	*buff = '\0';
	return (start);
}
