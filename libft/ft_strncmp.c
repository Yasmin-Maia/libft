/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:47:17 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/05 19:03:45 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/* 
int	main(void)
{
	char	*s1;
	char	*s2;


	s1 = "what is this";
	s2 = "what?";
	printf("src: %s\n %s\n", s1, s2);
	int	result1 = ft_strncmp(s1, s2, 7);  
	printf("dest: %d\n", result1);

	int	result2 = strncmp(s1, s2, 7);
	printf("dest2: %d\n", result2);

} */