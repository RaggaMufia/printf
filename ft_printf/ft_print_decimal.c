/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decmal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:18:15 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/18 14:03:08 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_print_decimal(const char *format)
{
	int			i;
	t_printf	*print;

	i = 0;
	print = (t_printf *)malloc(sizeof(t_printf));
	print->nbr = 0;
	while (format[i] == '%')
	{
		i++;
		if (format[i] == 'd' || format[i] == 'D')
		{
			print->n = va_arg(print->ap, int);
			print->nbr = ft_strlen(ft_itoa(print->n));
			ft_putnbr(print->n);
		}
	}
	return (print->nbr);
}
