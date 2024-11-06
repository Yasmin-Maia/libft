/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaia-do <ymaia-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:18:33 by yasmin            #+#    #+#             */
/*   Updated: 2024/10/30 18:30:29 by ymaia-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/* 
int main(void)
{
    int *ptr;
    int i;

    ptr = (int *)ft_calloc(5, sizeof(int));
    if (ptr == NULL)
        return (0);
    i = 0;
    while (i < 5)
    {
        printf("%d\n", ptr[i]);
        i++;
    }
    free(ptr);
    return (0);
} */