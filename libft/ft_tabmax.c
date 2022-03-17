/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:42:01 by bdehais           #+#    #+#             */
/*   Updated: 2022/03/09 16:22:47 by bdehais          ###   ########.fr       */
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
