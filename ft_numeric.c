#include "ft_printf.h"

int     ft_numeric(char c)
{
    t_list  *lst;

    lst->n = Va_arg(lst->ap, int);
    lst->str = ft_itoa_base(n, 10);
    lst->nbr = ft_strlen(lst.str);
    return (lst.nbr);
}