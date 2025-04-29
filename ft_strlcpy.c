/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:35:50 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/23 16:41:29 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
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
	ft_strlcpy(d, s, 3);    
    printf("dest: %s\n", d);
    return 0;
}  */