/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:26:56 by yasmin            #+#    #+#             */
/*   Updated: 2024/11/06 16:32:43 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		if (n == 0)
			return (1);
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		count;
	int		sign;
	long	nb;

	nb = n;
	sign = (n < 0);
	if (sign)
		nb = -nb;
	count = ft_count_digits(nb) + sign;
	ptr = (char *)malloc(count + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[count + sign] = '\0';
	while (count > 0)
	{
		ptr[count - 1] = n % 10 + '0';
		n /= 10;
		count--;
	}
	if (sign)
		ptr[0] = '-';
	return (ptr);
}

int main(void)
{
	int n = -214;
	printf("%s\n", ft_itoa(n));
	return (0);
}