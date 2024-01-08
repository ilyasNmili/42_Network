/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:18:58 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 19:27:32 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	p = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!p)
		return (0);
	ft_memmove(p, s1, ft_strlen(s1));
	ft_memmove(p + ft_strlen(s1), s2, ft_strlen(s2));
	p[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (p);
}
/*
int main() {
    const char *string1 = "Hello, ";
    const char *string2 = "World!";
    char *result = ft_strjoin(string1, string2);

	printf("Concatenated string: %s\n", result);
    free(result);
    return 0;
}
*/
