/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prin.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:14:03 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/20 15:12:42 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct		s_printf
{
	va_list			ap;
	int				n;
	int				nbr;
	char			c;
	char			*str;
	void			*ptr;
	unsigned int	uns;
}					t_printf;

unsigned int		ft_abs(int n);
int					ft_atoi(char *str);
int					ft_printf(const char *format, ...);
int					ft_print_char(const char *format);
int					ft_check_specifier(const char *format);
int					ft_print_str(const char *format);
int					ft_print_decimal(const char *format);
int					ft_print_int(const char *format);
int					ft_print_hex(const char *format);
int					ft_print_octal(const char *format);
int					ft_print_unsigned(const char *format);
int					ft_strlen(const char *str);
int					ft_print_address(const char *format);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_itoa(int val);
char				*ft_itoa_base(int val, int base);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
#endif
