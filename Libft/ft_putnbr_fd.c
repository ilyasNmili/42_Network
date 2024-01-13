/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:46:35 by inmili            #+#    #+#             */
/*   Updated: 2024/01/13 14:46:47 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	puissance(int n)
{
	int	p;

	p = 1;
	while (n != 0)
	{
		p *= 10;
		n--;
	}
	return (p);
}

static int	size(int n)
{
	int	s;

	s = 0;
	while (n != 0)
	{
		s++;
		n /= 10;
	}
	return (s);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	first_digit;
	int	s;

	if (n == 0)
		write(fd, "0", 1);
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		s = size(n);
		while (s > 0)
		{
			first_digit = n / puissance(s - 1);
			n -= first_digit * puissance(s - 1);
			s--;
			ft_putchar_fd(48 + first_digit, fd);
		}
	}
}
