/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:55:15 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/08 14:39:52 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/* 
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'a';
	if (ft_isalpha(c))
	{
		printf("ft_isalpha");
	}
	else
	printf("0");
} */