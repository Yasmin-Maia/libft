/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:06:17 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/23 11:55:42 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[10] = "olá";

	ft_bzero(s, 2);    
    printf("Buffer: %s\n", s);
	bzero(s, 2);   
    printf("Buffer2: %s\n", s);
    return 0;
} */