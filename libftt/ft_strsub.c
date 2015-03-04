/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:18:17 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:18:19 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*aux;
	char			*first;
	size_t			i;

	if (start < (unsigned int)len)
		return (NULL);
	i = 0;
	aux = (char *)malloc(1000);
	if (aux == NULL)
		return (NULL);
	first = aux;
	while (*s && i++ < len)
		*aux++ = *(s + start++);
	return (first);
}
