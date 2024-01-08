/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:19:30 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 17:31:38 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
/*
//char * output 7 char casting
int main(void)
{
	char *s = "ilyas";
	ft_memcpy(s, s, sizeof(char) * 6);
	printf("%s", s);
}
*/