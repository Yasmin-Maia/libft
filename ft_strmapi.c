/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:59:16 by yasmin            #+#    #+#             */
/*   Updated: 2024/11/05 11:14:05 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/* 
char ft_toupper_wrapper(unsigned int i, char c)
{
    (void)i;
    return (char)ft_toupper((unsigned char)c);
} 

int main(void)
{
    char    *str = "Hello";
    char    *new_str;

    new_str = ft_strmapi(str, ft_toupper_wrapper);
    if (new_str != NULL)
    {
        printf("Original: %s\n", str);
        printf("Modificada: %s\n", new_str);
        free(new_str);
    }
    return (0);
} */