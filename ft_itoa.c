/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:27:40 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/23 17:52:15 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	add_nbr(int n, char *buff, int index)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n > 9)
		add_nbr (n / 10, buff, index - 1);
	n = n % 10 + '0';
	buff[index] = n;
}

static char	*alloc_memory(int size)
{
	char	*buff;

	buff = malloc(sizeof(char) * (size + 1));
	if (buff == NULL)
		return (NULL);
	return (buff);
}

static int	get_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*buff;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = get_size(n);
	buff = alloc_memory(size);
	add_nbr(n, buff, size - 1);
	if (n < 0)
		buff[0] = '-';
	buff[size] = '\0';
	return (buff);
}
