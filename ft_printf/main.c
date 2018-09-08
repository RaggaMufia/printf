/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:13:09 by dmsibi            #+#    #+#             */
/*   Updated: 2018/09/08 16:30:47 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char	str[] = "Nkosana Msesho Msibi Mahlangu David";
	int		age;
	void	*ptr;
	char	c;

	c = '\n';
	ptr = &str;
	age = 23;
	printf("%s is %d y.o%c\n%p", str, age, c, ptr);
	ft_printf("%s is %d y.o%c\n%p", str, age, c, ptr);
	return (0);
}
