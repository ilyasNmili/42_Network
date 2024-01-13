/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:24:00 by inmili            #+#    #+#             */
/*   Updated: 2024/01/13 15:23:22 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					signe_n;
	int					i;
	unsigned long long	res;

	i = 0;
	res = 0;
	signe_n = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe_n *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + (str[i] - '0');
		if (res > 9223372036854775807 && signe_n == -1)
			return (0);
		if (res > 9223372036854775807 && signe_n == 1)
			return (-1);
		i++;
	}
	return ((int)res * signe_n);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char str[]="92523372036854775807";
	printf("%d\n%d",ft_atoi(str),atoi(str));
	return (0);
}*/
