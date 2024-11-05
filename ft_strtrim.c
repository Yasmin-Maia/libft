/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:30:53 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/30 19:08:51 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strtrim_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		found;

	i = 0;
	while (s1[i])
	{
		found = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (!found)
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	start;
	size_t	i;
	size_t	j;
	size_t	len;

	start = ft_strtrim_start(s1, set);
	i = start;
	j = 0;
	len = ft_strlen(s1) - start;
	temp = malloc(sizeof(char) * (len + 1));
	j = 0;
	if (temp == NULL)
		return (NULL);
	while (s1[i])
	{
		temp[j++] = s1[i++];
	}
	temp[j] = '\0';
	return (temp);
}
/* 
#include <stdio.h>

int main(void)
{
    char *s1 = "isissssiithisorthis";
    char *s2 = "is";
    char *result;

    result = ft_strtrim(s1, s2);
    if (result)
    {
        printf("Result: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error allocating memory.\n");
    }

    return (0);
} */