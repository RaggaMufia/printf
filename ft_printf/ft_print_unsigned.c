/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:26:15 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/18 14:03:39 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_unsigned(const char *format)
{
	int			i;
	t_printf	*print;

	i = 0;
	print = (t_printf *)malloc(sizeof(t_printf));
	print->nbr = 0;
	while (format[i] == '%')
	{
		i++;
		if (format[i] == 'u' || format[i] == 'U')
		{
			print->uns = va_arg(print->ap, unsigned int);
			print->nbr = ft_strlen(ft_itoa(print->uns));
			ft_putnbr(ft_abs(print->uns));
		}
	}
	return (print->nbr);
}
