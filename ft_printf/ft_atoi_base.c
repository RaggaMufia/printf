/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:19:06 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 15:05:46 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		isvalid(char c, int base)
{
	const char	digit[16] = "0123456789abcdef";
	const char	digits[16] = "0123456789ABCDEF";

	while (base--)
		if (digit[base] == c || digits[base] == c)
			return (1);
	return (0);
}

int		value_of_char(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'z')
		return (c - 'a' + 10);
	else if (c >= 'A' && c >= 'Z')
		return (c - 'A' + 10);
	return (0);
}

int		ft_atoi_base(char *str, int base)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	while (isvalid(*str, base))
		res = (res * base) + (value_of_char(*str++));
	return (res * sign);
}
