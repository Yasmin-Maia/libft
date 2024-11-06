/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:54:17 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/05 18:41:40 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	if (d == s || n == 0)
		return (dest);
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	char	d[20];

	s = "dfsfsaf";
	printf("src: %s\n", s);
	ft_memmove(d, s, 3);    
    printf("dest: %s\n", d);
	memmove(d, s, 3);   
    printf("dest2: %s\n", d);
    return 0;
}  */