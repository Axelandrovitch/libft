/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:06:13 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/11 18:22:57 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
   char buffer[20 + 1];

   strcpy(buffer, "holaholaholaholahola");
   printf("\nBuffer contents: %s\n", buffer);
   ft_bzero(buffer+10, 10);
   printf("\nBuffer contents: %s\n", buffer);
   return (0);
}
*/
