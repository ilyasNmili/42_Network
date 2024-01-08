/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:49:07 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 11:34:38 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str); 
		str++;
	}
	return (0);
}
/*
int main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("%p\n",ft_memchr(s, 0, 6));
	printf("%p",ft_memchr(s, 9, 6));
}
*/