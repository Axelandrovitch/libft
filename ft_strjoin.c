/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:27:33 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/19 14:51:42 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*buff;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	buff = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (buff == NULL)
		return (NULL);
	while (*s1)
	{
		buff[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		buff[i] = *s2;
		i++;
		s2++;
	}
	buff[i] = '\0';
	return (buff);
}
