/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:59:50 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 15:29:55 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct		s_list
{
	va_list			ap;
	int				n;
	int				nb;
	int				nbr;
	char			spec;
	char			*str;
	void			*ptr;
	unsigned int	uns;
}					t_list;

void				ft_putnbr(int nb);
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_printf(const char *format, ...);
int					ft_print_char(char c);
int					ft_putchar_int(char c);
int					ft_putstr_int(char *str);
int					ft_print_str(char c);
int					ft_numeric(char c);
int					ft_unsigned(char c);
int					ft_hex(char c);
int					ft_hex_cap(char c);
int					ft_conv_i(char c);
int					ft_octal(char c);
int					ft_strlen(char *str);
int					ft_alternate(char c);
int					ft_atoi_base(char *str, int base);
int					flag_spec(char *str);
char				*ft_itoa_base(int val, int base);
char				*ft_itoa_base_cap(int val, int base);
int					ft_print_addr(char c);
char				*ft_strchr(const char *str, char c);
char				*ft_print_memory(void *ptr);

#endif
