/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:17:49 by spestean          #+#    #+#             */
/*   Updated: 2015/02/24 13:17:51 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			k = i;
			j = 0;
			while (s1[k] == s2[j] && s2[j] != '\0')
				j++, k++;
			if (s2[j] == '\0')
				return ((char *)(s1 + i));
		}
		i++;
	}
	return ('\0');
}
