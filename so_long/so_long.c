/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:36:02 by mrollo            #+#    #+#             */
/*   Updated: 2022/06/01 16:16:16 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_mlx	mlx;

	if (argc != 2)
	{
		write(1, "Map missing\n", 12);
		return (0);
	}
	check_ber(argv[1]);
	mlx.str_map = ft_init(argv[1]);
	mlx.map_row = count_row(mlx.str_map);
	mlx.map_col = count_col(mlx.str_map);
	check_map(mlx.str_map, mlx.map_col);
	mlx.map = ft_split(mlx.str_map, '\n');
	check_wall(&mlx);
	mlx.mlx_ptr = mlx_init();
	mlx.img = (t_img *)malloc(sizeof(t_img) * 8);
	image_up(mlx);
	mlx.mlx_win = mlx_new_window(mlx.mlx_ptr, mlx.map_col * 32,
			mlx.map_row * 32, "so_long");
	draw_map(&mlx);
	mlx.count = 0;
	mlx.game_status = 1;
	mlx_key_hook(mlx.mlx_win, key_hook, &mlx);
	mlx_hook(mlx.mlx_win, 17, 0, close_window2, &mlx);
	mlx_loop(mlx.mlx_ptr);
}
