/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:00:59 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 14:33:43 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr_int(char *str)
{
	t_list	*lst;

	lst = NULL;
	lst->nbr = ft_strlen(str);
	write(1, &str, lst->nbr);
	return (lst->nbr);
}
