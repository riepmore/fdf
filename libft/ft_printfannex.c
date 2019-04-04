/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfannex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 06:38:31 by pmore             #+#    #+#             */
/*   Updated: 2013/12/26 21:45:40 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_n_len(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

int		ft_printmodulo(char c, va_list ap)
{
	int		j;

	j = 0;
	c = va_arg(ap, int);
	ft_putchar(c);
	j++;
	return (j);
}

int		check_i(char *str, int i)
{
	if (str[i] == '%' || str[i - 1] == '%')
		i++;
	return (i);
}
