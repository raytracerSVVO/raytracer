/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:02:40 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:02:43 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_aux;
	unsigned const char *src_aux;

	dst_aux = dst;
	src_aux = src;
	while (n--)
	{
		*dst_aux++ = *src_aux++;
	}
	return (dst);
}
