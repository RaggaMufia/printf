/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:59:40 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 14:19:25 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_octal(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 'o' || lst->spec == 'O')
	{
		lst->uns = va_arg(lst->ap, unsigned int);
		lst->str = ft_itoa_base(lst->uns, 8);
		ft_putstr(lst->str);
	}
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr);
}
