/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:02:15 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:02:25 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (*((char*)s1 + i) != (*((char*)s2 + i)))
			return (*((char*)s1 + i) - (*((char*)s2 + i)));
		i++;
	}
	return (0);
}
