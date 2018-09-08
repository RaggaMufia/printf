# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/07 14:13:58 by dmsibi            #+#    #+#              #
#    Updated: 2018/09/08 18:00:01 by dmsibi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = flag_spec.c\
	  ft_hex.c\
	  ft_addr.c\
	  ft_conv_i.c\
	  ft_octal.c\
	  ft_hex_cap.c\
	  ft_alternate.c\
	  ft_numeric.c\
	  ft_print_char.c\
	  ft_print_str.c\
	  ft_printf.c\
	  ft_putchar_int.c\
	  ft_putstr_int.c\
	  ft_strchr.c\
	  ft_unsigned.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_itoa_base.c\
	  ft_itoa_base_cap.c\
	  ft_putnbr.c\
	  ft_strlen.c\
	  ft_atoi_base.c\
	  ft_conv_i.c\

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o :%.c
	gcc $(FLAGS) -c -o $@ $<

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(OBJ) $(NAME)

re : fclean all
