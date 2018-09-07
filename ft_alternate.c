include "ft_printf.h"

int     ft_alternate(char c)
{
    t_list  *lst;

    if (c == 'x')
    {
        lst->nbr = ft_print_str("0x");
        lst->nbr += ft_hex_cap(lst->spec);
    }
    else if (c == 'X')
    {
        lst->nbr = ft_print_str("0x");
        lst_nbr += ft_hex(lst->spec);
    }
    else
        return ;
    return (lst->nbr);
}