/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:20:41 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/17 16:24:38 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		write(fd, "-", 1);
		if (nb <= -10)
			ft_putnbr_fd(nb / -10, fd);
		ft_putchar_fd((-1 * (nb % 10)) + '0', fd);
	}
	else if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	if (nb >= 0)
		ft_putchar_fd(nb % 10 + '0', fd);
}
