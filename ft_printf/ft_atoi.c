/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:18:49 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/20 13:20:57 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			i++;
		else if (str[i] == '-')
			sign = -1;
		else
			sign = 1;
		res = (res * 10) + (str[i] - '0');
	}
	return (res * sign);
}
