/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:51:10 by inmili            #+#    #+#             */
/*   Updated: 2024/01/09 15:46:37 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	s;
	int	tmp;

	tmp = n;
	s = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		s++;
	while (tmp)
	{
		s++;
		tmp /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		tmp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = n;
	len = length(n);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
		tmp *= -1;
	while (tmp)
	{
		res[--len] = '0' + tmp % 10;
		tmp /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
/*
int main(void)
{
	int n = -55;
	printf("%s ",ft_itoa(n));
}
*/