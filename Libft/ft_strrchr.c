/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyasNmili <inmili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:38:56 by ilyasNmili        #+#    #+#             */
/*   Updated: 2023/12/26 15:35:28 by ilyasNmili       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		size;

	ch = c;
	size = ft_strlen(s);
	while (--size >= 0)
	{
		if (s[size] == ch)
			return ((char *)s + size);
	}
	return (NULL);
}
/*
int main(void)
{
	char s[] = "Ilyas Nmili";
	char *p1 = ft_strrchr(s, 'y');
	char *p2 = ft_strrchr(s,'z');
	printf("%s\n", p1);
	printf("%p\n", p2);	
}
*/
