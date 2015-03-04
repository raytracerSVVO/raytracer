/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:16:38 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:16:41 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && n--)
		s1++, s2++;
	if (*s1 == 0 || *s2 == 0 || n == 0)
		return (1);
	return (0);
}