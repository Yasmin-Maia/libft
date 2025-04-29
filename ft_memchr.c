/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:08:42 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/24 15:38:30 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
		{
			return ((void *) &str[i]);
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
    char	str[] = "Hello, world!";
    char	*result;
	char	*result1;

    result = ft_memchr(str, 'o', 10);
    if (result)
        printf("Encontrado: %c\n", *result);
    else
        printf("Não encontrado.\n");

    result = ft_memchr(str, 'x', 10);
    if (result)
        printf("Encontrado: %c\n", *result);
    else
        printf("Não encontrado.\n");
	 result1 = memchr(str, 'o', 10);
    if (result1)
        printf("Encontrado: %c\n", *result1);
    else
        printf("Não encontrado.\n");

    result1 = memchr(str, 'x', 10);
    if (result1)
        printf("Encontrado: %c\n", *result1);
    else
        printf("Não encontrado.\n");

    return 0;
} */
