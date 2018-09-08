/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_spec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:58:25 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 13:12:37 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		flag_spec(char *str)
{
	int		i;
	t_list	lst;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strchr("cCdiDsSpoOuUxX", str[i]))
			lst.spec = str[i];
	}
	return (1);
}
