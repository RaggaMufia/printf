/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:13:29 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/15 15:37:15 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_itoa(int nb)
{
	char	*str;
	long	tmp;
	int		len;

	tmp = nb;
	len = (nb <= 0 ? 2 : 1);
	while (nb && len++)
		nb /= 10;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str[len--] = '\0';
	if (tmp < 0)
		str[0] = (tmp < 0 ? '-' : '0');
	while (tmp)
	{
		str[len] = (tmp < 0 ? -tmp : tmp) % 10 + '0';
		tmp /= 10;
	}
	return (str);
}
