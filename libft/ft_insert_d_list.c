/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_d_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thequem <thequem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 04:53:58 by theo              #+#    #+#             */
/*   Updated: 2014/02/01 15:52:19 by thequem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist		*ft_add(t_dlist *new_list, struct node *temp, int data)
{
	t_node		*new;

	new = malloc(sizeof(*new));
	if (temp->next == NULL)
		new_list = ft_add_end_d_list(new_list, data);
	else if (temp->prev == NULL)
		new_list = ft_add_start_d_list(new_list, data);
	else
	{
		new->data = data;
		temp->prev->next = new;
		new->prev = temp->prev;
		new->next = temp;
		temp->prev = new;
		new_list->length++;
	}
	return (new_list);
}

t_dlist		*ft_insert_d_list(t_dlist *list, int data, int id)
{
	t_node			*temp;
	int				i;

	temp = list->head;
	i = 1;
	if (list != NULL)
	{
		while (temp != NULL && i <= id)
		{
			if (id == i)
				ft_add(list, temp, data);
			else
				temp = temp->next;
			i++;
		}
	}
	return (list);
}
