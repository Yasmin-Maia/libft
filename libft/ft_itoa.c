/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:26:56 by yasmin            #+#    #+#             */
/*   Updated: 2024/11/08 14:10:12 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		count;
	long	nb;

	nb = n;
	count = ft_count_digits(n);
	ptr = (char *)malloc(count + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[count] = '\0';
	if (nb == 0)
		ptr[0] = '0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb *= (-1);
	}
	while (nb > 0)
	{
		ptr[count - 1] = nb % 10 + '0';
		nb /= 10;
		count--;
	}
	return (ptr);
}
/*
int main(void)
{
	int n = -214;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/