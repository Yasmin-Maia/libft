/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:05:16 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/08 14:59:40 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
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
	ft_memcpy(d, s, 3);    
    printf("dest: %s\n", d);
	memcpy(d, s, 3);   
    printf("dest2: %s\n", d);
    return 0;
}  */