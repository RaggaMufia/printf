/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:00:36 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 18:02:10 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_subfunction(void)
{
	t_list	*lst;
	int		i;
	char	*format;

	i = 0;
	format = NULL;
	lst = NULL;
	if (lst->spec == 'd' || lst->spec == 'D')
		lst->nbr = ft_numeric(lst->spec);
	else if (lst->spec == 'i')
		lst->nbr = ft_conv_i(lst->spec);
	else if (lst->spec == 'c' || lst->spec == 'C')
		lst->nbr = ft_print_char(lst->spec);
	else if (lst->spec == 'p')
		lst->nbr = ft_print_addr(lst->spec);
	else if (lst->spec == 'u' || lst->spec == 'U')
		lst->nbr = ft_unsigned(lst->spec);
	else if (lst->spec == 'o' || lst->spec == 'O')
	{
		if (format[i--] == '#')
		{
			ft_putstr("0x");
			lst->nbr = ft_octal(lst->spec) + 2;
		}
		else
			lst->nbr = ft_octal(lst->spec);
	}
	else if (lst->spec == 'x' || lst->spec == 'X')
	{
		if (format[i--] == '#')
			lst->nbr = ft_alternate(lst->spec);
	}
	else if (lst->spec == 's')
		lst->nbr = ft_print_str(lst->spec);
	return (lst->nbr);
}

int		ft_printf(const char *format, ...)
{
	t_list	*lst;
	int		i;

	i = 0;
	lst = NULL;
	va_start(lst->ap, format);
	while (format[i] != '\0')
	{
		lst->nbr += ft_putchar_int(format[i]);
		i++;
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				lst->nbr = ft_putchar_int(format[i]);
			else
			{
				while (format[i] != '%')
					lst->nbr = ft_subfunction();
			}
		}
	}
	va_end(lst->ap);
	return (lst->nbr);
}
