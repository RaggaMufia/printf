#include "ft_printf.h"

int     ft_hex_cap(char c)
{
    t_list  *lst;

    lst->uns = va_arg(lst->ap, unsigned int);
    lst->str = ft_itoa_base_cap(lst->uns, 16);
    lst->nbr = ft_print_str(lst->str);
    return (lst->nbr);
}