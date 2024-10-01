/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:18:39 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/12 15:30:24 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	ch;

	ch = 'a';
	printf("%c", ft_toupper(ch));
	ch = 'C';
	printf("\n%c", ft_toupper(ch));
	ch = '9';
	printf("\n%c", ft_toupper(ch));
	return (0);
}
*/
