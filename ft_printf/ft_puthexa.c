/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:56:54 by inmili            #+#    #+#             */
/*   Updated: 2024/01/19 11:49:17 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char c)
{
	char	*s1;
	char	*s2;
	int		size;

	s1 = "0123456789abcdef";
	s2 = "0123456789ABCDEF";
	size = 0;
	if (n > 15)
	{
		size += ft_puthexa(n / 16, c);
		size += ft_puthexa(n % 16, c);
	}
	else if (c == 'x')
		size += ft_putchar(s1[n]);
	else
		size += ft_putchar(s2[n]);
	return (size);
}
