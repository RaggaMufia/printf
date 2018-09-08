/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:59:04 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 14:27:12 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_addr(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 'p')
	{
		lst->ptr = va_arg(lst->ap, void *);
		ft_putstr("0x");
		lst->str = ft_print_memory(lst->ptr);
	}
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr + 2);
}
