/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:21:15 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/18 14:35:35 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_int(const char *format)
{
	int			i;
	t_printf	*print;

	i = 0;
	print = (t_printf *)malloc(sizeof(t_printf));
	print->nbr = 0;
	while (format[i] == '%')
	{
		i++;
		if (format[i] == 'i')
		{
			print->n = va_arg(print->ap, int);
			print->nbr = ft_strlen(ft_itoa_base(print->n, 10));
			ft_putnbr(print->n);
		}
	}
	return (print->nbr);
}
