/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:36:39 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/22 13:47:44 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* #include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;

	c = '9';
	if (ft_isascii(c))
	{
		printf("ft_isascii\n");
	}
    if (isascii(c))
    {
        printf("isascii\n");
    }
	else
	printf("0");
} */