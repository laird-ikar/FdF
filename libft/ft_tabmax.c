/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:42:01 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/17 16:24:49 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tabmax(int *tab, size_t size)
{
	int	res;

	res = -2147483648;
	while (size--)
	{
		if (res < *tab)
			res = *tab;
		tab++;
	}
	return (res);
}
