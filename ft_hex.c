#include "ft_printf.h"

int     ft_hex(char c)
{
    t_list  *lst;

    lst->uns = va_arg(lst->ap, unsigned int);
    lst->str = ft_itoa_base(lst->uns, 16);
    ft_putstr(str);
    lst->nr = ft_strlen(lst->str);
    return (lst->nbr);
}