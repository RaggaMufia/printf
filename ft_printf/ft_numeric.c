/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numeric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:59:32 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 13:49:26 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_numeric(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 'd' || lst->spec == 'D' || lst->spec)
	{
		lst->n = va_arg(lst->ap, int);
		lst->str = ft_itoa_base(lst->n, 10);
	}
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr);
}
