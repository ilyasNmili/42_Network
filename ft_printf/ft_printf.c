/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:47:46 by inmili            #+#    #+#             */
/*   Updated: 2024/01/19 12:09:41 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversions(char c, int *size, va_list *args)
{
	if (c == 'c')
		*size += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		*size += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
	{
		*size += ft_putstr("0x");
		*size += ft_putadress(va_arg(*args, unsigned long));
	}
	else if (c == 'd' || c == 'i')
		*size += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		*size += ft_putunsigned(va_arg(*args, unsigned int));
	else if (c == 'x' || c == 'X')
		*size += ft_puthexa(va_arg(*args, unsigned int), c);
	else if (c == '%')
		*size += ft_putchar('%');
	else
		*size += ft_putchar(c);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i])
	{
		if ((str[i] == '%') && str[++i])
			ft_conversions(str[i], &size, &args);
		else if (str[i] == '%')
			break ;
		else
			size += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (size);
}
