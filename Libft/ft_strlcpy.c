/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:21:48 by inmili            #+#    #+#             */
/*   Updated: 2024/01/07 17:14:44 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	size_src;

	size_src = 0;
	while (*(src + size_src))
	{
		size_src++;
	}
	while (*src && dstsize > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (size_src);
}
/*
int main(void)
{
	char T1[]="ilyas";
	char T2[]="Nmili";

	printf("%zu\n",ft_strlcpy(T1,T2,4));
	printf("%s\n",T1);
	printf("%s",T2);
	return (0);
}
*/
