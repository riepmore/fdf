/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/22 06:08:05 by pmore             #+#    #+#             */
/*   Updated: 2014/10/10 21:03:56 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_append(char *s, char c)
{
	int		i;
	char	*ret;

	if (s == NULL)
	{
		ret = (char *)malloc(sizeof(char) * 2);
		ret[0] = c;
		ret[1] = '\0';
		return (ret);
	}
	i = -1;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 2));
	while (s[++i])
		ret[i] = s[i];
	ret[i] = c;
	ret[i + 1] = '\0';
	return (ret);
}
