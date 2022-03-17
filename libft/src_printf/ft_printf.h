/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:38:10 by bguyot            #+#    #+#             */
/*   Updated: 2022/03/17 16:24:08 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft.h"

void		ft_printf_chr(va_list args, int *count);
void		ft_printf_str(va_list args, int *count);
void		ft_printf_ptr(va_list args, int *count);
void		ft_printf_int(va_list args, int *count);
void		ft_printf_uint(va_list args, int *count);
void		ft_printf_xint(va_list args, int *count);
void		ft_printf_upper_xint(va_list args, int *count);
void		ft_printf_percent(va_list args, int *count);

#endif
