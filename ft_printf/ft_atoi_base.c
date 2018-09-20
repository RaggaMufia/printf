/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:13:05 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/15 12:13:07 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     isvalid(char c, int base)
{
    char    digit[16] = "0123456789abcdef";
    char    digits[16] = "0123456789ABCDEF";

    while (base--)
        if (digit[base] == c || digits[base] == c)
            return (1);
    return (0);
}

int     value_char(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (0);
}

int     ft_atoi_base(char *str, int base)
{
    int     res;
    int     sign;

    res = 0;
    while (*str <= 32)
        str++;
    sign = (*str == '-' || *str == '+') ? -1 : 1;
    while (isvalid(*str, base))
        res = (res * base) + value_char(*str++);
    return (res * sign);
}
