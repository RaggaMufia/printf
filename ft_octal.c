#include "ft_printf.h"

int     ft_octal(char c)
{
    t_list  lst;

    lst.uns = va_arg(lst.ap, unsigned int);
    lst.str = ft_itoa_base(lst.uns, 8);
    ft_putstr(lst.str);
    lst.nbr = ft_strlen(lst.str);
    return (lst.nbr);
}