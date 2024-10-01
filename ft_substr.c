/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:13:11 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/18 19:37:38 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	i;
	size_t	opt_len;

	if (s == NULL || start >= ft_strlen(s))
		return (NULL);
	opt_len = ft_strlen(s + start);
	if (opt_len < len)
		len = opt_len;
	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buff[i] = s[start + i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello my dear friend!";
	size_t len = ft_strlen("dear");
	char	*sub = ft_substr(src, 9, len);
	printf("substring: |%s|expected: |dear|\n", sub);
//	assert(sub == "dear");
	return (0);
}
*/
