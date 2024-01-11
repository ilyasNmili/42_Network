/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:16:32 by inmili            #+#    #+#             */
/*   Updated: 2024/01/11 18:44:36 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	int		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (!s[i + 1] || s[i + 1] == c))
			count++;
		i++;
	}
	return (count);
}

static	int	split(char **ret, const char *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	x;

	start = 0;
	end = 0;
	x = 0;
	while (s[end])
	{
		if (s[end] == c || !s[end])
			start = end + 1;
		if (s[end] != c && (s[end + 1] == c || !s[end + 1]))
		{
			ret[x] = malloc((end - start + 2) * sizeof(char));
			if (!ret[x])
			{
				while (x--)
					free(ret[x]);
				return (0);
			}
			ft_strlcpy(ret[x++], s + start, end - start + 2);
		}
		end++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;

	if (!s)
		return (0);
	ret = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ret)
		return (0);
	if (!split(ret, s, c))
	{
		free(ret);
		return (0);
	}
	ret[count_words(s, c)] = NULL;
	return (ret);
}
/*
int main(void) {
    const char *inputString = "This is a test string";
    char **resultArray = ft_split(inputString, ' ');

    if (resultArray != NULL) {
        printf("Split words:\n");
        // Print each word
        for (int i = 0; resultArray[i] != NULL; i++) {
            printf("%s\n", resultArray[i]);
        }
        free_strsplit_result(resultArray);
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}*/
