/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:15:25 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:15:27 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	char	*start;

	new = (char *)malloc(sizeof(char) * ft_strlen(s));
	start = new;
	while (*s)
	{
		*new = f(*s);
		new++, s++;
	}
	*new = 0;
	return (start);
}
