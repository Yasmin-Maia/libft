/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:49:26 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/22 12:12:56 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
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

	c = '9';
	if (ft_isdigit(c))
	{
		printf("ft_isdigit\n");
	}
    if (isdigit(c))
    {
        printf("isdigit\n");
    }
	else
	printf("0");
} */