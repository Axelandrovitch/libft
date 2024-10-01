/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:53:59 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/23 18:18:57 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc_memory(char const *s)
{
	size_t	len;
	char	*buff;

	len = ft_strlen(s);
	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return (NULL);
	return (buff);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*buff;

	buff = alloc_memory(s);
	i = 0;
	while (s[i] != '\0')
	{
		buff[i] = (*f)(i, s[i]);
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
