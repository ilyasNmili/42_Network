/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:42:43 by inmili            #+#    #+#             */
/*   Updated: 2024/01/19 11:28:45 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	size;

	if (!s)
		return (ft_putstr("(null)"));
	size = -1;
	while (s[++size])
	{
		write(1, s + size, 1);
	}
	return (size);
}
