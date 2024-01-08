/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:38:56 by ilyasNmili        #+#    #+#             */
/*   Updated: 2024/01/08 16:37:08 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	int				size;
	char			*p;

	ch = (unsigned char)c;
	p = (char *)s;
	size = (int)ft_strlen(s);
	while (size >= 0)
	{
		if (*(p + size) == ch)
			return ((p + size));
		size--;
	}
	return (0);
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
