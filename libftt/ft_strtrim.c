/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:18:33 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:18:35 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*first;
	char	*auxs;
	char	*auxsf;
	char	*rez;
	size_t	size;

	size = ft_strlen(s);
	rez = 0;
	rez = ft_memalloc(sizeof(char) * (size + 1));
	if (rez == 0)
		return (0);
	auxs = (char *)s;
	while (*auxs && (*auxs == ' ' || *auxs == '\t' || *auxs == '\n'))
		auxs++;
	if (*auxs == 0)
		return (auxs);
	auxsf = (char *)s + size - 1;
	while (*auxsf == ' ' || *auxsf == '\t' || *auxsf == '\n')
		auxsf--;
	auxsf++;
	first = rez;
	while (auxs != auxsf)
		*rez++ = *auxs++;
	return (first);
}
