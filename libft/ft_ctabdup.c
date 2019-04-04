/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctabdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/08 00:08:26 by pierremore        #+#    #+#             */
/*   Updated: 2014/10/10 19:00:14 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_ctabdup(char **tab)
{
	char		**ret;
	int			i;

	i = 0;
	while (tab[i])
		i++;
	ret = (char **)malloc(sizeof(char *) * (i + 1));
	i = -1;
	while (tab[++i])
		ret[i] = ft_strdup(tab[i]);
	ret[i] = NULL;
	return (ret);
}
