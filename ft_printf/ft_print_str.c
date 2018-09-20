/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_strs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:24:27 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/18 14:35:49 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_str(const char *format)
{
	int			i;
	t_printf	*print;

	i = 0;
	print = (t_printf *)malloc(sizeof(t_printf));
	print->nbr = 0;
	if (format[i] == '%')
	{
		i++;
		if (format[i] == 's' || format[i] == 'S')
		{
			print->str = va_arg(print->ap, char *);
			print->nbr = ft_strlen(print->str);
			ft_putstr(print->str);
		}
	}
	return (print->nbr);
}
