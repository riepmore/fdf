/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 15:40:54 by theo              #+#    #+#             */
/*   Updated: 2014/03/27 22:11:19 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist			*swap(t_dlist *list, struct node *node, int cpt)
{
	t_node				*tmp;
	int					temp_cpt;
	int					data;

	tmp = node;
	temp_cpt = cpt;
	data = tmp->data;
	while (data < (tmp->prev)->data && cpt > 1)
	{
		if (cpt != 2)
			tmp = tmp->prev;
		cpt--;
	}
	if (temp_cpt != cpt)
	{
		ft_insert_d_list(list, data, cpt);
		ft_remove_id_d_list(list, temp_cpt + 1);
	}
	return (list);
}

t_dlist			*sort_list(t_dlist *list)
{
	t_dlist				*temp_list;
	t_node				*node;
	unsigned int		cpt;

	temp_list = list;
	node = temp_list->head;
	cpt = 1;
	while (cpt < temp_list->length)
	{
		node = node->next;
		cpt++;
		temp_list = swap(temp_list, node, cpt);
	}
	return (temp_list);
}
