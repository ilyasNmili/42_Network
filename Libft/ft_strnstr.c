/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyasNmili <inmili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:38:49 by ilyasNmili        #+#    #+#             */
/*   Updated: 2023/12/26 22:01:12 by ilyasNmili       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
int	size(char *T)
{
	int	i;

	i = 0;
	while (T[i] != 0)
		i++;
	return (i);
}

char	*ft_strstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && n == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
		n--;
	}
	return (NULL);
}
/*
int main(void)
{
	char T1[]="IlyasNmili ousamazahidi";
	char T2[]="ili";;
	printf("%s",ft_strstr(T1,T2,10));
	return (0);
}
*/
