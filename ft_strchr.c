/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:10:37 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/08 15:39:21 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *) &s[i]);
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	*s;
	char	*result1 = ft_strchr(s, 'b');  
	char *result2 = strchr(s, 'b');

	s = "i don't care";
	printf("src: %s\n", s);
	if (result1)
		printf("dest: %s\n", result1);
	else
		printf("Caractere não encontrado.\n");

	if (result2)
		printf("dest2: %s\n", result2);
	else
		printf("Caractere não encontrado (strchr).\n");
	return 0;
} */