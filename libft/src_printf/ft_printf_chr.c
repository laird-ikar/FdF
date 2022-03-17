/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:38:21 by bdehais           #+#    #+#             */
/*   Updated: 2022/03/14 16:33:11 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_chr(va_list args, int *count)
{
	char	c;

	c = (char) va_arg(args, int);
	ft_putchar_fd(c, 1);
	(*count)++;
}
