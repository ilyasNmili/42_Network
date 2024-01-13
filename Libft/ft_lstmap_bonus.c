/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:23:23 by inmili            #+#    #+#             */
/*   Updated: 2024/01/13 14:19:21 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*p;
	void	*new_cont;

	if (!lst || !f || !del)
		return (0);
	result = NULL;
	while (lst)
	{
		new_cont = f(lst->content);
		p = ft_lstnew(new_cont);
		if (!p)
		{
			ft_lstclear(&result, del);
			del(new_cont);
			return (0);
		}
		ft_lstadd_back(&result, p);
		lst = lst->next;
	}
	return (result);
}

/*
typedef struct s_list{
    char *content;
    struct s_list *next;
} t_list;

char *f(char *s, unsigned int i)
{
    char *ret;
    int ind = -1;

    ret = malloc(7 * sizeof(char));
    while (++ind < 5)
        ret[ind] = s[ind];
    ret[5] = '0' + i;
    ret[6] = '\0';
    return (ret);
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}
t_list *lstmap(t_list **lst, char *f(char *, unsigned int))
{
    t_list *current;
    t_list *result;

    current = *lst;
    result = NULL;
    while(current)
    {
        t_list *new_node = malloc(sizeof(t_list));
        new_node->content = (*f)(current->content,1);
        new_node->next =NULL;
        ft_lstadd_back(&result, new_node);
        current = current->next;
    }
    return (result);
}

int main(void)
{
    char s1[] = "ilyas";
    char s2[] = "Nmili";

    t_list *head = malloc(sizeof(t_list));
    head->content = s1;
    //printf("%s",head->content);
    t_list *second = malloc(sizeof(t_list));
    second->content = s2;
    head->next = second;
    second->next = NULL;
    
    t_list *result = lstmap(&head, f);
    while(result)
    {
        printf("content1: %s\n",result->content);
        result = result->next;
    }
    return (0);
}*/
