/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_d_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thequem <thequem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 15:10:38 by thequem           #+#    #+#             */
/*   Updated: 2014/01/06 15:28:00 by thequem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_delete_d_list(t_dlist **list)
{
	t_node		*tmp;
	t_node		*del;

	tmp = (*list)->head;
	while (tmp != NULL)
	{
		del = tmp;
		tmp = tmp->next;
		free(del);
	}
	free(*list);
	list = NULL;
}
