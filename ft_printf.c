#include "ft_printf.h"

int     ft_printf(const char *format, ...)
{
    t_list  *lst;
    int     i;

    i = 0;
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
                {
                    lst->spec = format[i];
                    if (lst->spec == 'd' || lst->spec == 'D')
                        lst->nbr = ft_numeric(lst->spec);
                    else if (lst->spec == 'i')
                        lst->nbr = ft_conv_i(;st->spec);
                    else if (lst->spec == 'c' || lst->spec == 'C')
                        lst->nbr = ft_print_char(lst->spec);
                    else if (lst->spec == 'p')
                        lst->spec = ft_print_addr(lst->spec);
                    else if (lst->spec == 'u' || lst->soec == 'U')
                        lst->nbr = ft_unsigned(lst->spec);
                    else if (lst->spec == 's')
                        lst->nbr = ft_print_str(lst->spec);
                    else if (lst->spec == 'S')
                        lst->nbr = ft_put_somethng(lst->spec);
                    else if (lst->spec == 'o' || lst->spec == 'O')
                    {
                        if (format[i--] == '#')
                        {
                            lst->nbr = ft_print_str("0x")
                            lst->nbr += ft_octal(lst->spec);
                        }
                        else
                            lst->nbr = ft_octal(lst->spec);
                    }
                    else if (lst->spec == 'x' || 'X')
                    {
                        if (format[i--] == '#')
                        {
                            lst->nbr = ft_print_str("0x");
                            lst->nbr += ft_alternate(lst->spec);
                        }
                        else
                            lst->nbr = ft_hex(lst->spec);
                    }
                    else
                        i++;
                }
            }
        }
        i++;
    }
    va_end(lst->ap);
    return (lst->nbr);
}