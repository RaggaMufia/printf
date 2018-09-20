/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saved_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:12:31 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/20 12:44:39 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_printf	*print;
	int			i;

	i = 0;
	print = (t_printf *)malloc(sizeof(t_printf));
	print->nbr = 0;
	va_start(print->ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			print->nbr += ft_print_char(format);
			i++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				print->nbr += ft_print_char("%");
			else if (format[i] != '%')
				print->nbr += ft_check_specifier(format);
			else
				i++;
		}
		else
			i++;
		i++;
	}
	va_end(print->ap);
	return (print->nbr);
}
