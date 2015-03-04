/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 12:59:48 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 12:59:52 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *aux;

	while ((*alst) != 0)
	{
		del((*alst)->content, (*alst)->content_size);
		aux = *alst;
		(*alst) = (*alst)->next;
		free(aux);
	}
}
