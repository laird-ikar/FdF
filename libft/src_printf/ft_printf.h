/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:38:10 by bdehais           #+#    #+#             */
/*   Updated: 2022/03/14 16:32:58 by bdehais          ###   ########.fr       */
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
