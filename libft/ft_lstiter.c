/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 00:40:03 by pmore             #+#    #+#             */
/*   Updated: 2013/12/13 01:25:47 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*tmp;

	tmp = lst;
	if (tmp == NULL)
	{
		ft_putendl("Error : lstiter is NULL");
		return ;
	}
	while (tmp->next != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
