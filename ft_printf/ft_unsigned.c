/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:01:14 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 14:36:02 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_unsigned(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 'u' || lst->spec == 'U')
	{
		lst->uns = va_arg(lst->ap, unsigned int);
		lst->nb = ft_atoi_base(lst->str, 10);
	}
	ft_putnbr(lst->nb);
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr);
}
