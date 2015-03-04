/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:11:12 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:11:15 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*aux1;
	char	*aux2;

	i = 1;
	aux1 = (char *)s1;
	while (*aux1++)
		i++;
	aux2 = (char *)malloc(sizeof(char) * i);
	aux1 = aux2;
	while (*s1)
		*aux2++ = *s1++;
	return (aux1);
}
