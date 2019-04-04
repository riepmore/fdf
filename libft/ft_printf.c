/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 02:13:31 by pmore             #+#    #+#             */
/*   Updated: 2013/12/26 21:45:35 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_printd(int d, va_list ap)
{
	int		j;

	j = 0;
	d = va_arg(ap, int);
	ft_putnbr(d);
	j = find_n_len(d);
	return (j);
}

int		ft_prints(char *s, va_list ap)
{
	int		j;

	j = 0;
	s = va_arg(ap, char *);
	ft_putstr(s);
	j = ft_strlen(s);
	return (j);
}

int		ft_printc(char c, va_list ap)
{
	int		j;

	j = 0;
	c = va_arg(ap, int);
	ft_putchar(c);
	j++;
	return (j);
}

int		ft_printfbis(char *format, int i, va_list ap)
{
	char	c;
	int		j;

	j = 0;
	c = '\0';
	if (format[i] == '%' && format[i + 1] == '%')
		j = j + ft_printmodulo(c, ap);
	else if (format[i] == '%' && format[i + 1] == 'i')
		j = j + ft_printd(c, ap);
	else
	{
		ft_putchar(format[i]);
		j++;
	}
	return (j);
}

int		ft_printf(const char *format, ...)
{
	t_print		prnt;

	prnt.j = 0;
	prnt.c = '\0';
	prnt.i = 0;
	prnt.s = NULL;
	prnt.d = 0;
	va_start(prnt.ap, format);
	while (format[prnt.i] != '\0')
	{
		if (format[prnt.i] == '%' && format[prnt.i + 1] == 'd')
			prnt.j = prnt.j + ft_printd(prnt.d, prnt.ap);
		else if (format[prnt.i] == '%' && format[prnt.i + 1] == 's')
			prnt.j = prnt.j + ft_prints(prnt.s, prnt.ap);
		else if (format[prnt.i] == '%' && format[prnt.i + 1] == 'c')
			prnt.j = prnt.j + ft_printc(prnt.c, prnt.ap);
		else
			prnt.j = prnt.j + ft_printfbis((char *)format, prnt.i, prnt.ap);
		prnt.i = check_i((char *)format, prnt.i);
		prnt.i++;
	}
	va_end(prnt.ap);
	return (prnt.j);
}
