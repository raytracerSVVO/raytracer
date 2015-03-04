/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:01:28 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:01:33 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*aux;

	aux = 0;
	if (size == 0)
		return (aux);
	aux = (void *)malloc(size);
	if (aux != 0)
		ft_bzero(aux, size);
	return (aux);
}
