/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:13:02 by inmili            #+#    #+#             */
/*   Updated: 2024/01/11 17:08:53 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		s;

	if (!lst)
		return (0);
	s = 0;
	current = lst;
	while (current != NULL)
	{
		s++;
		current = current->next;
	}
	return (s);
}
