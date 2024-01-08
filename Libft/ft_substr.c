/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:41:01 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 13:17:16 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if ((size_t)start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int main() {
    const char *originalString = "Hello, World!";
    char *substring1 = ft_substr(originalString, 7, 5);
    printf("Substring 1: %s\n", substring1);
    free(substring1);
    char *substring2 = ft_substr(originalString, 0, 20);
    printf("Substring 2: %s\n", substring2);
    free(substring2);
    char *substring3 = ft_substr(originalString, 15, 5);
    printf("Substring 3: %s\n", substring3);
    free(substring3);
    char *substring4 = ft_substr(originalString, 20, 5);
    printf("Substring 4: %s\n", substring4);
    free(substring4);
    return 0;
}
*/