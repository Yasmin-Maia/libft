/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:39:31 by yasmin            #+#    #+#             */
/*   Updated: 2024/10/25 13:54:04 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (j == needle_len - 1)
				return ((char *)haystack + i);
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