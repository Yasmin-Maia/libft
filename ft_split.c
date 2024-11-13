/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:26:41 by yasmin            #+#    #+#             */
/*   Updated: 2024/11/07 18:41:19 by ymaia-do         ###   ########.fr       */
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
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_get_word(char const *s, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			start = i;
		if ((s[i] == c && i > 0 && s[i - 1] != c)
			|| (s[i + 1] == '\0' && s[i] != c))
		{
			if (s[i + 1] == '\0' && s[i] != c)
				len = i - start + 1;
			else
				len = i - start;
			result[j] = ft_substr(s, start, len);
			j++;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
	{
		result = malloc(sizeof(char *) * 1);
		if (result == NULL)
			return (NULL);
		result[0] = NULL;
		return (result);
	}
	result = malloc (sizeof(char *) * (ft_count_words(s, c) + 1));
	if (result == NULL)
		return (NULL);
	ft_get_word(s, c, result);
	return (result);
}
/* 
void	ft_free_split(char **s, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(s[j]);
		j++;
	}
	free(s);
}
int main(void)
{
	char *s = " Hello   World is ok   ";
	char **ptr = ft_split(s, ' ');
	int i;
	
	i = 0;
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	ft_free_split(ptr, i);
	return (0);
} */
