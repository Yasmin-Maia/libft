/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:25:04 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/24 16:51:24 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
	}
	if (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/* 
#include <stdlib.h>

int	main(void)
{
	char 	*s;
	char 	*e;

	s = "-1254";
	e = "45";
	ft_atoi(s);
	printf("ft_atoi: %s\n", s);
	ft_atoi(e);
	printf("ft_atoi: %s\n", e);
	atoi(s);
	printf("atoi: %s\n", s);
	atoi(e);
	printf("atoi: %s\n", e);
	return (0);
} */