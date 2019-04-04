/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 00:31:17 by pmore             #+#    #+#             */
/*   Updated: 2013/12/13 01:20:55 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst)
{
	if (alst == NULL)
	{
		ft_putendl("alst is NULL");
		return ;
	}
	while ((*alst)->next != NULL)
	{
		ft_lstdelone(alst);
		alst = &(*alst)->next;
	}
}
