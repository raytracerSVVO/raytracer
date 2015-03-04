/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:01:50 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:01:55 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)dst;
	aux2 = (unsigned char *)src;
	while (n--)
	{
		*aux1 = *aux2;
		if (*aux2 == (unsigned char)c)
			return (aux1 + 1);
		aux1++;
		aux2++;
	}
	return (0);
}
