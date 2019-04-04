/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_id_d_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 04:22:25 by theo              #+#    #+#             */
/*   Updated: 2014/03/27 22:12:02 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_pt(d_list *list, struct node *temp)
{
	if (temp->next == NULL)
	{
		list->tail = temp->prev;
		list->tail->next = NULL;
	}
	else if (temp->prev == NULL)
	{
		list->head = temp->next;
		list->head->prev = NULL;
	}
	else
	{
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
	}
}

d_list			*ft_remove_id_d_list(d_list *list, int id)
{
	t_dlist				*tmp;
	t_node				*temp;
	int					i;

	i = 1;
	tmp = list;
	temp = list->head;
	if (list != NULL)
	{
		while (temp != NULL && i <= id)
		{
			if (id == i)
			{
				ft_pt(tmp, temp);
				free(temp);
				list->length--;
			}
			else
				temp = temp->next;
			i++;
		}
	}
	return (list);
}
