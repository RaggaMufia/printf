#include "ft_printf.h"

int     ft_print_char(char c)
{
    t_list  lst;

    lst.n = va_arg(lst.ap, int);
    lst.nbr = ft_putchar_int(lst.n)
    return (lst.nbr);
}