/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:13:15 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/20 15:18:49 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_check_specifier(const char *format)
{
	t_printf	*print;

	print = (t_printf *)malloc(sizeof(t_printf));
	print->nbr = 0;
	if (ft_strstr(format, "%c") || ft_strstr(format, "%C"))
		print->nbr += ft_print_char(format);
	else if (ft_strstr(format, "%s") || ft_strstr(format, "%S"))
		print->nbr += ft_print_str(format);
	else if (ft_strstr(format, "%d") || ft_strstr(format, "%D"))
		print->nbr += ft_print_decimal(format);
	else if (ft_strstr(format, "%i"))
		print->nbr += ft_print_int(format);
	else if (ft_strstr(format, "%x") || ft_strstr(format, "%X"))
		print->nbr += ft_print_hex(format);
	else if (ft_strstr(format, "%o") || ft_strstr(format, "%O"))
		print->nbr += ft_print_octal(format);
	else if (ft_strstr(format, "%p"))
	{
		print->nbr += ft_print_address(format);
	}
	else if (ft_strstr(format, "%u") || ft_strstr(format, "%U"))
		print->nbr += ft_print_unsigned(format);
	else
		format++;
	return (print->nbr);
}
