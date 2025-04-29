/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:11:17 by ymaia-do          #+#    #+#             */
/*   Updated: 2024/10/22 15:05:08 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, int n)
{
	unsigned char	*ptr;
	int				i;

	ptr = str;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
/* 
 #include <stdio.h>
 #include <string.h>

int main() {
    char buffer[20];

    ft_memset(buffer, 'a', 10);  
    buffer[10] = '\0';  
    printf("Buffer: %s\n", buffer);
	memset(buffer, 'a', 10);  
    buffer[10] = '\0';  
    printf("Buffer2: %s\n", buffer);
    return 0;
} */