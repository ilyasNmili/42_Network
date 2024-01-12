/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:15:16 by inmili            #+#    #+#             */
/*   Updated: 2024/01/12 19:10:09 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;

	if (!dst && src && !dstsize)
		return (ft_strlen(src));
	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize <= size_dest)
		return (dstsize + size_src);
	i = 0;
	while (src[i] && i < dstsize - size_dest - 1)
	{
		dst[size_dest + i] = src[i];
		i++;
	}
	dst[size_dest + i] = '\0';
	return (size_dest + size_src);
}
/*
NULL problem
int main(void)
{
	char T1[7]="ilyas";
	char T2[6]="Nmili";

	printf("%u\n",ft_strlcat(T1,T2,6));
	printf("%s\n",T1);
	printf("%s",T2);
	return (0);
}
*/
