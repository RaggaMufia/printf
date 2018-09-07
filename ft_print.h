#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unsitd.h>
# include <stdarg.h>

typedef struct  s_list
{
    int             n;
    int             nbr;
    char            spec;
    char            *str;
    void            *ptr;
    unsigned int    uns;
}                   t_list;

int     ft_printf(const char *format, ...);
int     ft_print_char(char c);
int     ft_putchar_int(char c);
int     ft_putstr_int(char *str);
int     ft_print_str(char c);
int     ft_numeric(char c);
int     ft_unsigned(char c);
int     ft_hex(char c);
int     ft_hex_cap(char c);
int     ft_conv_i(char c);
int     ft_octal(char c);
int     ft_strlen(char *str);
int     ft_atoi_base(char *str, 10);
int     flag_spec(char *str);
char    *ft_itoa_base(int val, int base);
char    *ft_print_addr(char c);
char    *ft_strchr(const char *str, char c);
char    *ft_print_memory(int p);