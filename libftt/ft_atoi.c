/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 12:56:45 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 12:56:51 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		ft_isspace(int c)
{
	unsigned char ca;

	ca = (unsigned char)c;
	if (ca == '\t' || ca == '\n' || ca == '\v' || ca == '\f'
			|| ca == '\r' || ca == ' ')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int nr;
	int neg;

	neg = 1;
	nr = 0;
	while (*str && ft_isspace(*str))
		str++;
	if (str[0] == '-')
		neg = -1;
	if (str[0] == '-' || str[0] == '+')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
		nr = nr * 10 + (*str++ - '0');
	nr *= neg;
	return (nr);
}
