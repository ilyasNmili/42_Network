/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:21:48 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 17:00:49 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (i + 1 < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/* #include<string.h>
int main(void)
{
	char T1[]="ilyas";
	char T2[]="Nmili";
	char T3[]="ilyas";
	char T4[]="Nmili";

	printf("%zu\n",ft_strlcpy(T1,T2,0));
	printf("%s\n",T1);
	printf("%s\n",T2);
	printf("--------\n");
	printf("%zu\n",strlcpy(T3,T4,0));
	printf("%s\n",T3);
	printf("%s\n",T4);
	return (0);
}
 */