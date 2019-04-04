/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 00:43:41 by pmore             #+#    #+#             */
/*   Updated: 2013/12/08 15:35:14 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while ((s1[i] != '\0'))
	{
		while (s1[i + j] == s2[j] && (s1[i + j]) != '\0')
			j++;
		if (s2[j] == '\0')
			return (&((char *)s1)[i]);
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
