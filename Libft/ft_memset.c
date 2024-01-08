/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:49:28 by inmili            #+#    #+#             */
/*   Updated: 2024/01/08 17:31:23 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p1;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)b;
	while (i < len)
	{
		p1[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
