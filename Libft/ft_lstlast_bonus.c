/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:23:34 by inmili            #+#    #+#             */
/*   Updated: 2024/01/11 17:09:28 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	t_list	*result;

	if (!lst)
		return (0);
	current = lst;
	while (current != NULL)
	{
		result = current;
		current = current->next;
	}
	return (result);
}
