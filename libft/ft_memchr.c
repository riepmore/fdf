/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 22:01:30 by pmore             #+#    #+#             */
/*   Updated: 2014/03/27 22:05:24 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	if (!s)
		return ((void *)s);
	while (n > 0)
	{
		if (*((char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
