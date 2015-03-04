/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:02:05 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:02:08 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *aux;

	aux = (char *)s;
	while (n--)
	{
		if (c == *aux)
			return (aux);
		aux++;
	}
	return (0);
}
