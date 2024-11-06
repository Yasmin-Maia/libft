/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:55:15 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/05 17:58:00 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
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