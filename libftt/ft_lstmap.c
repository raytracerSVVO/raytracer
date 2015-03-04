/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:00:44 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:00:47 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *start;
	t_list *aux;

	new = 0;
	new = (t_list *)malloc(sizeof(t_list));
	if (new == 0)
		return (0);
	new = f(lst);
	lst = lst->next;
	start = new;
	while (lst)
	{
		aux = 0;
		aux = (t_list *)malloc(sizeof(t_list));
		if (aux == 0)
			return (0);
		aux = f(lst);
		aux->next = 0;
		new->next = aux;
		new = new->next;
		lst = lst->next;
	}
	return (start);
}
