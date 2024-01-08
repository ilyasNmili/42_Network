/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:24:00 by inmili            #+#    #+#             */
/*   Updated: 2024/01/07 16:14:00 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	signe_n;
	int	i;
	int	res;

	i = 0;
	res = 0;
	signe_n = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe_n++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + (str[i] - '0');
		i++;
	}
	if (!signe_n)
		return (res);
	else
		return (-res);
}
/*
int main(void)
{
	char str[]="-2147483649";
	int n;

	n = ft_atoi(str);
	printf("%d",n);
	return (0);
}
*/