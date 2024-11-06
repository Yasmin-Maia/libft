/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:15:45 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/11/05 19:02:50 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
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

	c = '#';
	if (ft_isalnum(c))
	{
		printf("ft_isdigit\n");
	}
    if (isalnum(c))
    {
        printf("isdigit\n");
    }
	else
	printf("0");
} */