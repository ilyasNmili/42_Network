/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:35:25 by inmili            #+#    #+#             */
/*   Updated: 2024/01/11 18:40:09 by inmili           ###   ########.fr       */
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

static int	count_left_elmts(char const *s1, char const *set)
{
	size_t	count;

	count = 0;
	while (s1[count] && is_in(s1[count], set))
		count++;
	return (count);
}

static int	indx_right_elmts(char const *s1, char const *set)
{
	size_t	count;

	if (!ft_strlen(s1))
		return (0);
	count = ft_strlen(s1) - 1;
	while (s1[count] && is_in(s1[count], set))
		count--;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*p;

	if (!s1 || !set)
		return (0);
	size = indx_right_elmts(s1, set) - count_left_elmts(s1, set) + 1;
	p = ft_substr(s1, count_left_elmts(s1, set), size);
	return (p);
}
/*
int main(void)
{
char str1[] = "";
char set1[] = "";
char *trimmed1 = ft_strtrim(str1, set1);
printf("%s\n",trimmed1);
}
// char str2[] = "";
// char set2[] = "";
// char *trimmed2 = ft_strtrim(str2, set2);
//printf("%d   %d\n",count_elmts(str2,set2)[0], count_elmts(str2,set2)[1]);
// char str3[] = "NoTrimmingNeeded"; char set[] = " ";
// char *trimmed3 = ft_strtrim(str3, set3);
printf("%s\n",ft_strtrim("", "cdef"));
}*/
