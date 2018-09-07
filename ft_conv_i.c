include "ft_printf.h"

int     ft_print_addr(char c)
{
    t_list  *lst;

    lst->ptr = va_arg(lst->ap, void *);
    lst.str = ft_print_memory(lst->ptr);
    lst->nbr = ft_strlen(lst->str);
    return (lst->nbr);
}