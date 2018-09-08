/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:00:23 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 15:17:19 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_str(char c)
{
	t_list	*lst;

	lst = NULL;
	c = lst->spec;
	if (lst->spec == 's')
		lst->str = va_arg(lst->ap, char *);
	lst->nbr = ft_strlen(lst->str);
	return (lst->nbr);
}
