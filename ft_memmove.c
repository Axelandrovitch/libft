/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahetru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:23:14 by ahetru            #+#    #+#             */
/*   Updated: 2024/09/13 14:08:54 by ahetru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((const char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}

	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{ 
	char csrc[] = "hello Buddy How U Doin"; 
	char cdest[100]; 
	ft_memcpy(cdest, csrc, strlen(csrc)+1); 
	printf("Copied string is %s", cdest); 

	int isrc[] = {10, 20, 30, 40, 50}; 
	int n = sizeof(isrc)/sizeof(isrc[0]); 
	int idest[n], i; 
	printf("sizeof isrc: %lu\n", sizeof(isrc));
	ft_memcpy(idest, isrc, sizeof(isrc)); 
	printf("\nCopied array is "); 
	for (i=0; i<n; i++) 
	    printf("%d ", idest[i]); 
	return 0; 
}
*/
