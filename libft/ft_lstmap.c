/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 00:45:04 by pmore             #+#    #+#             */
/*   Updated: 2014/03/27 22:05:00 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmp;

	tmp = lst;
	while (tmp->next != NULL)
	{
		f(tmp->content);
		ft_lstdelone(&tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
