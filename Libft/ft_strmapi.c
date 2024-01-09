/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:18:44 by inmili            #+#    #+#             */
/*   Updated: 2024/01/09 18:04:59 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	if (!s || !f)
		return (0);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	size_t	i;
// 	char	*str;
// 	char	*result;

// 	if (!s)
// 		return (NULL);
// 	str = str_new(str_len(s));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	result = str;
// 	while (*s)
// 		*str++ = f(i++, *s++);
// 	*str = '\0';
// 	return (result)
// int plus(int n)
// {
//     return (n + 1);
// }
// int sum(int a, int (*f)(int))
// {
//     a = f(a);
//     return (a + 1);
// }

// int main(void)
// {
//    int c = 5;
//    int (*p)(int, int(*)(int)) = &sum;

//     printf("%d ",p(c, &plus));
//     return (0);
// }*/