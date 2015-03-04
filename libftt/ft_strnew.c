/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:16:53 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:16:55 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*aux;

	aux = 0;
	aux = (char *)malloc(sizeof(char) * size);
	if (aux != NULL)
		ft_bzero(aux, size);
	return (aux);
}
