/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:00:59 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:01:03 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*aux;

	aux = 0;
	aux = (t_list *)ft_memalloc(sizeof(t_list) * content_size);
	if (content == 0)
	{
		aux->content = 0;
		aux->content_size = 0;
		return (aux);
	}
	if (aux == 0)
		return (0);
	aux->content = malloc(sizeof(aux->content) * content_size);
	ft_strcpy(aux->content, content);
	aux->content_size = content_size;
	aux->next = 0;
	return (aux);
}
