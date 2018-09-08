/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_cap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:59:25 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 13:41:19 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_hex_cap(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 'X')
	{
		lst->uns = va_arg(lst->ap, unsigned int);
		lst->str = ft_itoa_base_cap(lst->uns, 16);
		ft_putstr(lst->str);
	}
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr);
}
