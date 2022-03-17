/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:39:34 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/17 16:24:35 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src_printf/ft_printf.h"

static void	(*g_prints[])(va_list, int *) = {['c'] = *ft_printf_chr,
['s'] = *ft_printf_str, ['p'] = *ft_printf_ptr, ['d'] = *ft_printf_int,
['i'] = *ft_printf_int, ['u'] = *ft_printf_uint, ['x'] = *ft_printf_xint,
['X'] = *ft_printf_upper_xint,
['%'] = *ft_printf_percent};

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (*str)
	{
		if (*str++ == '%')
			(g_prints[(int)*(str++)])(args, &count);
		else
		{
			ft_putchar_fd(*(str - 1), 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
