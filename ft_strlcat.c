/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:12 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/23 17:45:14 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	dst_size;

	i = 0;
	a = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	if (dst[i])
	{
		i = ft_strlen(dst);
	}
	dst_size = i;
	if (size <= dst_size)
		return (ft_strlen(src) + size);
	while (src[a] != '\0' && a < (size - dst_size - 1))
	{
		dst[i] = src[a];
		i++;
		a++;
	}
	dst[i] = '\0';
	return (dst_size + ft_strlen(src));
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	char	d[20] = "somebody";

	s = "something";
	printf("src: %s\n", s);
	printf("dst: %s\n", d);
	ft_strlcat(d, s, 20);    
    printf("cat: %s\n", d);
    return 0;
} */