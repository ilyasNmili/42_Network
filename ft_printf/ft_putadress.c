/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:42:36 by inmili            #+#    #+#             */
/*   Updated: 2024/01/19 12:09:49 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(unsigned long n)
{
	int		size;
	char	*s;

	size = 0;
	s = "0123456789abcdef";
	if (n > 15)
	{
		size += ft_putadress(n / 16);
		size += ft_putadress(n % 16);
	}
	else
		size += ft_putchar(s[n]);
	return (size);
}
