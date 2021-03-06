/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:13:01 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/20 15:18:43 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_address(const char *format)
{
	t_printf	*print;

	if (!(print = (t_printf *)malloc(sizeof(t_printf))))
		return (0);
	if (ft_strstr(format, "%p"))
	{
		print->ptr = va_arg(print->ap, void *);
		print->str = ft_itoa_base(ft_atoi(print->ptr), 16);
		ft_putstr("0x77ffe");
		ft_putstr(print->str);
		print->nbr = ft_strlen(print->str);
	}
	return (print->nbr);
}
