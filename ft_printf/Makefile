# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 12:50:42 by dmsibi            #+#    #+#              #
#    Updated: 2018/09/20 13:21:32 by dmsibi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c\
	  ft_abs.c\
	  ft_check_specifier.c\
	  ft_itoa.c\
	  ft_itoa_base.c\
	  ft_print_char.c\
	  ft_print_decimal.c\
	  ft_print_hex.c\
	  ft_print_int.c\
	  ft_print_octal.c\
	  ft_print_str.c\
	  ft_print_unsigned.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_strlen.c\
	  ft_putnbr.c\
	  ft_print_address.c\
	  ft_strstr.c\
	  ft_atoi.c\

FLAGS = -Wall -Werror -Wextra
	
OBJ = $(SRC:.c=.o)

%.o :%.c
	gcc $(FLAGS) -c -o $@ $<

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all : $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(OBJ) $(NAME)

re : fclean all
