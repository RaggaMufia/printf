/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alternate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:58:56 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 13:33:04 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_alternate(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (c == 'x')
	{
		lst->uns = va_arg(lst->ap, unsigned int);
		ft_putstr("0x");
		lst->str = ft_itoa_base(lst->uns, 16);
	}
	else if (c == 'X')
	{
		lst->uns = va_arg(lst->ap, unsigned int);
		ft_putstr("0x");
		lst->str = ft_itoa_base_cap(lst->uns, 16);
	}
	else
		return (0);
	ft_putstr(lst->str);
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr + 2);
}
