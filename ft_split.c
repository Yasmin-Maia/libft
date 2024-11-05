/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:26:41 by yasmin            #+#    #+#             */
/*   Updated: 2024/11/05 18:16:54 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_get_word(char const *s, char c, size_t *i)
{
	char	*ptr;
	size_t	j;
	size_t	start;
	size_t	end;

	j = 0;
	start = *i;
	while (s[start] && s[start] != c)
		start++;
	end = start;
	ptr = (char *)malloc((end - *i) + 1);
	if (ptr == NULL)
		return (NULL);
	while (*i < end)
	{
		ptr[j] = s[*i];
		j++;
		(*i)++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			ptr[j] = ft_get_word(s, c, &i);
			j++;
		}
		else
			i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	char *s = "Hello World is ok";
	char **ptr = ft_split(s, ' ');
	int i = 0;
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	return (0);
}*/
