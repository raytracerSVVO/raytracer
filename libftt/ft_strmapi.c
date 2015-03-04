/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:15:41 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:15:44 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	char	*first;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s));
	first = new;
	while (*s)
	{
		*new = f(i, *s);
		new++, s++, i++;
	}
	*new = 0;
	return (first);
}
