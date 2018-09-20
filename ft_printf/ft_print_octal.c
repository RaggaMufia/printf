/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_octal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:22:37 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/20 12:47:37 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_octal(const char *format)
{
	int			i;
	t_printf	*print;

	i = 0;
	print = (t_printf *)malloc(sizeof(t_printf));
	print->nbr = 0;
	while (format[i] == '%')
	{
		i++;
		if (format[i] == 'o' || format[i] == 'O')
		{
			print->uns = va_arg(print->ap, unsigned int);
			print->str = ft_itoa_base(print->uns, 8);
			print->nbr = ft_strlen(print->str);
			ft_putstr(print->str);
		}
	}
	return (print->nbr);
}
