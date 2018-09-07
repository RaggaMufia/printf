include "ft_printf.h"

int     ft_putstr_int(char *str)
{
    int     n;
    t_list  lst;

    lst.nbr = ft_strlen(str);
    write(1, &str, lst.nbr);
    return (lst.nbr);
}