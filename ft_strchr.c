#include "ft_printf.h"

char    *ft_strchr(const char *str, char c)
{
    size_t  i;

    i = 0;
    while (str[i])
    {
        if (str[i])
            return ((char *)str + i);
        i++;
    }
    if (!c && str[i] == '\0')
        return ((char *)str + i);
    return (NULL);
}