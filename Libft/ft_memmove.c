/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:34:39 by inmili            #+#    #+#             */
/*   Updated: 2024/01/12 18:03:11 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*s;

	p = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			*(p + len) = *(s + len);
	}
	else
	{
		while (len--)
			*p++ = *s++;
	}
	return (dst);
}
/*
int main() {
	char str[] = "ilyas Nmili";
	ft_memmove(str + 2, str, 10);
	printf("%s", str);
	return 0;
}
*/