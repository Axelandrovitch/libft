/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:33:12 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/12 18:03:01 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ch;

	ch = s;
	while (*ch != '\0')
	{
		if (*ch == (char)c)
			return ((char *)ch);
		ch++;
	}
	if (c == '\0')
		return ((char *)ch);
	return (NULL);
}
/*
int	main(void)
{
	char	str[6] = "Hello";
	char	*p = ft_strchr(str, 'e');
	printf("%c", *p);
	return (0);
}
*/
