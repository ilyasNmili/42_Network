/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:34:00 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 17:32:26 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
int main() {
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";

	int result1 = ft_memcmp(str1, str2, sizeof(str1));

	int result2 = ft_memcmp(str1, str3, sizeof(str1));

	printf("%d\n", result1);
	printf("%d\n", result2);

	return 0;
}
*/