/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:58:43 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 13:16:16 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_addr(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 'c' || lst->spec == 'C')
	{
		lst->n = va_arg(lst->ap, int);
		lst->str = ft_itoa_base(lst->n, 8);
	}
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr);
}
