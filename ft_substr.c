/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:54:20 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/07 15:48:16 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*temp;

	if (s == NULL)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	if (start >= slen || len == 0)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	temp = malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
		return (NULL);
	while (i < len)
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/* 
#include <stdio.h>

int main()
{
    char *s = "Hello, world!";
    char *sub;

    sub = ft_substr(s, 7, 5);
    printf("Substring: %s\n", sub);

    free(sub);

    sub = ft_substr(s, 20, 5);
    printf("Substring: %s\n", sub);

    free(sub);

    sub = ft_substr(s, 7, 0);
    printf("Substring: %s\n", sub);

    free(sub);

    return 0;
} */