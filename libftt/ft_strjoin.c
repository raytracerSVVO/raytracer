/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:14:24 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:14:26 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	char	*first;

	aux = 0;
	aux = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (aux == 0)
		return (0);
	first = aux;
	while (*s1)
		*aux++ = *s1++;
	while (*s2)
		*aux++ = *s2++;
	return (first);
}
