/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_vector_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:21:35 by bdehais           #+#    #+#             */
/*   Updated: 2022/03/16 16:57:29 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int	tab_tab_vector3_size(t_vector3 ***tab)
{
	int	i;

	i = 0;
	while (tab[i++])
		;
	return (i);
}

int	tab_vec_s(t_vector3 **tab)
{
	int	i;

	i = 0;
	while (tab[i++])
		;
	return (i);
}

void	super_free(t_fdf *fdf)
{
	free_3d((void ***) fdf->tab);
	mlx_destroy_image(fdf->mlx_ptr, fdf->img_ptr);
	mlx_destroy_window(fdf->mlx_ptr, fdf->win_ptr);
}

int	get_color(double high, t_fdf *fdf)
{
	if (fdf->y < 20)
		return (0x00FFFFFF);
	if (high < 0)
		return (0x00AAAAAA);
	if (high < 20)
		return (0x000066DD);
	if (high < 30)
		return (0x00DDDD33);
	if (high < 70)
		return (0x0000AA11);
	if (high < 150)
		return (0x00AAAAAA);
	return (0x00FFFFFF);
}

void	free_3d(void ***tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			free(tab[i][j]);
			j++;
		}
		free(tab[i]);
		i++;
	}
	free(tab);
}
