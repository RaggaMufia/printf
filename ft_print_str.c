#include "ft_printf.h"

int     ft_print_str(t_list lst)
{
    lst.str = va_arg(lst.ap, char *);
    lst.nbr =  ft_putstr_int(lst.str);
    return (lst.nbr);
}