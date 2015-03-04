/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 12:58:53 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 12:59:13 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_getsize(int n)
{
	int		i;
	long	m;

	m = n;
	i = -1;
	while (m)
	{
		m /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char		*rez;
	long long	b;
	int			m;
	int			i;

	b = n;
	if (b == 0)
		return ("0");
	i = -1;
	m = 0;
	if (b < 0)
	{
		b = b * (-1);
		i++;
		m++;
	}
	m = m + ft_getsize(n);
	rez = (char *)ft_memalloc(sizeof(char) * (m + 1));
	rez[i++] = '-';
	while (m >= i)
	{
		rez[m--] = (b % 10) + '0';
		b /= 10;
	}
	return (rez);
}
