/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:20:02 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/18 14:03:03 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_hex(const char *format)
{
	t_printf	*print;
    int			i;

	i = 0;
	print = (t_printf *)malloc(sizeof(t_printf));
	print->nbr = 0;
	while (format[i] == '%')
	{
		i++;
		if (format[i] == 'x' || format[i] == 'X')
		{
			print->uns = va_arg(print->ap, unsigned int);
			print->str = ft_itoa_base(print->uns, 16);
			print->nbr = ft_strlen(ft_itoa(print->uns));
			ft_putnbr(print->uns);
		}
	}
	return (print->nbr);
}
