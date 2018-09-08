/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:37:23 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/07 17:41:42 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_conv_i(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 'i')
	{
		lst->n = va_arg(lst->ap, int);
		ft_putnbr(lst->n);
		lst->str = ft_itoa_base(lst->uns, 10);
	}
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr);
}
