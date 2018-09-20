/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:17:33 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/18 14:53:24 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_print_char(const char *format)
{
   t_printf     *print;
   int          i;

   i = 0;
   print = (t_printf *)malloc(sizeof(t_printf));
   while (format[i] == '%')
   {
       i++;
       if (format[i] == 'c' || format[i] == 'C')
       {
           print->c = va_arg(print->ap, int);
		   ft_putchar(print->c);
       }
   }
   return (1);
}
