/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:01:07 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 14:40:13 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i])
			return ((char *)str + i);
		i++;
	}
	if (!c && str[i] == '\0')
		return ((char *)str + i);
	return (NULL);
}
