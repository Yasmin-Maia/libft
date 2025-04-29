/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:39:31 by yasmin            #+#    #+#             */
/*   Updated: 2024/11/05 19:12:50 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (j == little_len - 1)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/* 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *haystack = "Hello World";
	char *needle = "World";
	size_t len = 11;
	printf("%s\n", ft_strnstr(haystack, needle, len));
	return (0);
} */