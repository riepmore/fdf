/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 22:02:12 by pmore             #+#    #+#             */
/*   Updated: 2013/11/26 22:02:13 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	void		*temp;
	void		*dest;

	temp = ft_strdup((char*)s2);
	dest = ft_memcpy(s1, temp, n);
	free(temp);
	return (dest);
}
