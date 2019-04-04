/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 20:35:59 by thequem           #+#    #+#             */
/*   Updated: 2014/03/27 23:26:41 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_list(t_dlist *list)
{
	t_node			*tmp;
	int				i;

	tmp = list->head;
	while (tmp != NULL)
	{
		ft_printf("cmd :%s\n", tmp->cmd);
		i = 0;
		while (tmp->arg[i])
		{
			ft_printf("arg :%s\n", tmp->arg[i]);
			i++;
		}
		tmp = tmp->next;
		ft_putchar('\n');
	}
	ft_printf("NULL\n");
}
