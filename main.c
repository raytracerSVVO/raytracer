/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spestean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 12:31:43 by spestean          #+#    #+#             */
/*   Updated: 2015/03/04 17:11:37 by spestean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ray.h"

int	key_hook(int keycode, t_mlx *mlx)
{
	(void)mlx;
	if (keycode == 65307)
		exit(0);
	return (0);
}

int ft_draw(int len)
{
	t_mlx		mlx;
	int			x;
	int			y;

	y = 50;
	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, 420, 420, "RT");
	mlx_key_hook(mlx.win, key_hook, &mlx);
	while (y <= len)
	{
		x = 50;
		while (x <= len)
		{
			if (x == y || x + y - 50 == len)
				mlx_pixel_put(mlx.mlx, mlx.win, x, y, 0x00FF00);
			else
				mlx_pixel_put(mlx.mlx, mlx.win, x, y, 0xFFFFFF);
			if (x == 60 || y == 60 || x == 290 || y == 290)
				mlx_pixel_put(mlx.mlx, mlx.win, x, y, 0x0066FF);
			x++;
		}
		y++;
	}
	mlx_loop(mlx.mlx);
	return (0);
}

int	main()
{
	int len;

	len = 300;
	ft_draw(len);
	return (0);
}
