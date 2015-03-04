/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:18:44 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:18:46 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(void *a, void *b)
{
	int	aux;

	aux = *(int *)a;
	*(int *)a = *(int *)b;
	*(int *)b = aux;
}
