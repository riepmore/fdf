/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 22:31:21 by pmore             #+#    #+#             */
/*   Updated: 2013/12/13 01:21:12 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst)
{
	if (*alst != NULL)
	{
		(*alst)->content = NULL;
		(*alst)->content_size = 0;
		free(*alst);
		*alst = NULL;
	}
	else
		ft_putendl("Error: lstdelone is NULL.");
}
