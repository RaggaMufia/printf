#include "ft_printf.h"

int     ft_unsigned(char c)
{
    t_list  *lst;

    lst->uns = va_arg(lst->ap, unsigned int);
    lst->nb = ft_atoi_base(lst->str, 10);
    ft_putnbr(nb);
    lst->nbr = ft_strlen(lst.str);
}