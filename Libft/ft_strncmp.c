/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyasNmili <inmili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:38:43 by ilyasNmili        #+#    #+#             */
/*   Updated: 2023/12/26 22:02:40 by ilyasNmili       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((s1[i] - s2[i]));
}
/*
int main(void)
{
	char *T1;
	char *T2;
	T1="Ilyas";
	T2="Ilili";
	printf("%d",ft_strncmp(T1,T2,3));
	return (0);
}
*/
