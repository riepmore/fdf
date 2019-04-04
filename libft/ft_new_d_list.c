/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_d_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thequem <thequem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 17:27:35 by thequem           #+#    #+#             */
/*   Updated: 2014/02/01 15:54:56 by thequem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist			*ft_new_d_list(void)
{
	t_dlist		*new_list;

	new_list = malloc(sizeof(*new_list));
	if (new_list != NULL)
	{
		new_list->length = 0;
		new_list->head = NULL;
		new_list->tail = NULL;
	}
	return (new_list);
}
