/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:48:42 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/22 13:56:13 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

	c = '\n';
	if (ft_isprint(c))
	{
		printf("ft_isprint\n");
	}
    if (isprint(c))
    {
        printf("isprint\n");
    }
	else
	printf("0");
} */