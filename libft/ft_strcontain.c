/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcontain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:06:34 by bdehais           #+#    #+#             */
/*   Updated: 2022/03/03 12:17:12 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcontain(char **src, char *tofind)
{
	while (*src)
	{
		if (!ft_strcmp(*src, tofind))
			return (1);
		src++;
	}
	return (0);
}
