/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:07:17 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:07:24 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	ft_test(char *aux, size_t length)
{
	size_t i;

	i = 0;
	while (i <= length)
		printf("%c", aux[i++]);
	printf("\n");
}

void	ft_sort(void *list, size_t length)
{
	size_t	i;
	size_t	j;
	int		*aux;

	i = 0;
	j = 0;
	aux = (int *)list;
	printf("\n");
	while (i < length)
	{
		j = 0;
		while (j < length)
		{
			if (aux[i] < aux[j])
			{
				ft_test((char *)aux, length);
				ft_swap(&aux[i], &aux[j]);
				ft_test((char *)aux, length);
			}
			j++;
		}
		i++;
	}
}
