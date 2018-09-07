#include "ft_printf.h"
// I should change this function with the print_addr source
int     ft_print_addr(char c)
{
    t_list  *lst;

    lst->n = va_arg(lst->ap, int);
    lst->str = ft_itoa_base(lst->n, 8);
    lst->nbr = ft_strlen(lst->str);
    return (lst->nbr);
}