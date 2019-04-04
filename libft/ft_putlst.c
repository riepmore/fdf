/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 01:11:53 by pmore             #+#    #+#             */
/*   Updated: 2013/12/18 06:25:28 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putlst(t_list *list)
{
	t_list		*tmp;

	tmp = list;
	while (tmp != NULL)
	{
		ft_putstr(tmp->content);
		ft_putstr(" -> ");
		tmp = tmp->next;
	}
}
