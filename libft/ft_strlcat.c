/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 22:02:29 by pmore             #+#    #+#             */
/*   Updated: 2013/11/26 22:02:32 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		lend;
	size_t		lens;
	size_t		lend2;
	size_t		i;

	i = 0;
	lend = 0;
	lens = 0;
	lend2 = 0;
	while (src[lens] != '\0')
		lens++;
	while (dst[lend] != '\0')
	{
		lend++;
		lend2++;
	}
	while (src[i] != '\0' && lend + i < size)
		dst[lend++] = src[i++];
	dst[lend] = 0;
	if (size < lend2)
		return (size + lens);
	return (lend2 + lens);
}
