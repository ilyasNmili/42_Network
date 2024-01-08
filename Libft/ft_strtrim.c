/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:35:25 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 21:35:49 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;
	char	*p;

	i = 0;
	count = 0;
	if (!set || !s1)
		return (0);
	while (s1[i])
	{
		if (!is_in(s1[i], set))
			count++;
		else
			break;
		i++;
	}
	p = (char *)malloc(sizeof(char) * (count + 1));
	i = 0;
	count = 0;
	while (s1[i])
	{
		if (!is_in(s1[i], set))
			p[count++] = s1[i];
		else
			break;
		i++;
	}
	p[count] = '\0';
	return (p);
}
int main(void)
{
char str1[] = "lkl lk  Hello, World! ";
char set1[] = " kl";
char *trimmed1 = ft_strtrim(str1, set1);
printf("%s\n",trimmed1);
char str2[] = " \t\t Welcome to the Jungle \t ";
char set2[] = " \t";
char *trimmed2 = ft_strtrim(str2, set2);
printf("%s\n",trimmed2);
// char str3[] = "NoTrimmingNeeded"; char set[] = " ";
// char *trimmed3 = ft_strtrim(str3, set3);
// printf("%s\n",trimmed3);
}