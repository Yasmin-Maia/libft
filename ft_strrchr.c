/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:17:46 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/08 15:41:18 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if ((unsigned char)c == '\0')
	{
		return ((char *) &s[ft_strlen(s)]);
	}
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *) &s[i]);
		}
		i--;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	*s;

	s = "what is this";
	printf("src: %s\n", s);
	char	*result1 = ft_strrchr(s, '\0');  
	if (result1)
		printf("dest: %s\n", result1);
	else
		printf("Caractere não encontrado.\n");

	char	*result2 = strrchr(s, '\0');
	if (result2)
		printf("dest2: %s\n", result2);
	else
		printf("Caractere não encontrado (strchr).\n");
	return 0;
} */