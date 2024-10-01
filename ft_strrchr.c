/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:33:12 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/13 13:08:01 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*ch;
	char		*pc;

	pc = NULL;
	ch = s;
	while (*ch != '\0')
	{
		if (*ch == c)
			pc = ((char *)ch);
		ch++;
	}
	return (pc);
}
/*
int	main(void)
{
	char	str[6] = "Hello";
	char	*p = ft_strrchr(str, 'e');
	char	str2[6] = "Hello";
	char	*p2 = ft_strrchr(str2, 'a');
	printf("%c\n", *p);
	if (p2 == NULL)
		printf("char not found");
	return (0);
}
*/
