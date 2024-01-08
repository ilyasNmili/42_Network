/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:38:56 by ilyasNmili        #+#    #+#             */
/*   Updated: 2024/01/07 15:51:20 by inmili           ###   ########.fr       */
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
