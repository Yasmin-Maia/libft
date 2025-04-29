/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:56:52 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/23 16:38:35 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/* 
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*c;

	c = "sssssssssssd";
		printf("%d\n", ft_strlen(c));
        printf("%d\n", strlen(c));
}  */