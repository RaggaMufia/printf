/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:13:36 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/15 12:45:37 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(int val, int base)
{
	char	*str;
	int		len;
	long	nb;
	int		sign;

	nb = (val < 0) ? -(long)val : val;
	sign = (val <0 && base == 10) ? -1 : 0;
	len = (sign == -1) ? 2 : 1;
	while ((nb /= base))
		len++;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	while (len-- + sign)
	{
		str[len] = (nb % base < 10) ? (nb % base + '0') : (nb % base + 'A' - 10);
		nb /= base;
	}
	return (str);
}
