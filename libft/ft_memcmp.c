/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:39:09 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/24 16:02:59 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (c1[i] != c2[i])
		{
			return (c1[i] - c2[i]);
		}
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcde";
    char str2[] = "abcde";
    char str3[] = "abcdF";
    char str4[] = "abcdeF";

  
    printf("Teste 1: %d\n", ft_memcmp(str1, str2, 5));
    printf("Teste 2: %d\n", ft_memcmp(str1, str3, 5));
    printf("Teste 3: %d\n", ft_memcmp(str3, str1, 5));
    printf("Teste 4: %d\n", ft_memcmp(str1, str4, 5)); 
    printf("Teste 5: %d\n", ft_memcmp(str1, str2, 0)); 

	printf("Teste 1: %d\n", memcmp(str1, str2, 5));
    printf("Teste 2: %d\n", memcmp(str1, str3, 5));
    printf("Teste 3: %d\n", memcmp(str3, str1, 5));
    printf("Teste 4: %d\n", memcmp(str1, str4, 5)); 
    printf("Teste 5: %d\n", memcmp(str1, str2, 0));

    return 0;
} */