/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcalendar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:49:48 by bdehais           #+#    #+#             */
/*   Updated: 2022/03/07 10:54:58 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcalendar(const t_list *lst, size_t calendar)
{
	if (!lst)
		return (NULL);
	while (calendar-- && lst->nx)
		lst = lst->nx;
	return ((t_list *) lst);
}
