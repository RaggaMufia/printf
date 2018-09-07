#include "ft_printf.h"

int     ft_putchar_int(char c)
{
    t_list  lst;
    
    write(1, &c, 1);
    return (lst.n);
}