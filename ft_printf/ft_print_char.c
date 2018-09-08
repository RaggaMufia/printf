/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:00:13 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 13:20:04 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_char(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 'c' || lst->spec == 'C')
		lst->n = va_arg(lst->ap, int);
	lst->nbr = ft_putchar_int(lst->n);
	return (lst->nbr);
}
