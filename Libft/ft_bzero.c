/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:01:22 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 17:32:03 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p = 0;
		p++;
	}
}
/*
int main(void)
{
	char s[10];
	ft_bzero(s, sizeof(s));
	for(int i = 0; i < 10; i++)
		printf("%d ",s[i]);

}
*/