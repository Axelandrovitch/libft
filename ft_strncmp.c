/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:03:49 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/17 14:43:58 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		i++;
		s1++;
		s2++;
	}
	if (i < n)
		return (*s1 - *s2);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char str1[] = "he";
	const char str2[] = "heklo";
	printf("diff: %i", ft_strncmp(str1, str2, 3));
	char	big[] = "dear friend";
	char	little[] = "dear";
	printf("\ndiff: %i", ft_strncmp(big, little, 4));
	return (0);
}
*/
