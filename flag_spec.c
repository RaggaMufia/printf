#include "ft_printf.h"

int     flag_spec(char *str)
{
    int     i;
    t_list  lst;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_strchr("cCdiDsSpoOuUxX", str[i]))
            lst.spec = str[i];
    }
    return (1);
}◙