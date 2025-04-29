/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:00:47 by yasmin            #+#    #+#             */
/*   Updated: 2024/11/05 19:33:48 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	ptr = (char *)malloc(len - i + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/* 
#include <stdio.h>

int main(void)
{
	char *s1 = "isisssiHello Worldiisisisss";
	char *set = "is";
	char *ptr = ft_strtrim(s1, set);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
} */