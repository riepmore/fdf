/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_start_d_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 14:58:16 by thequem           #+#    #+#             */
/*   Updated: 2014/03/27 23:27:00 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdropcmd(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != ' ' && str[i] != '\0')
		i++;
	word = malloc(sizeof(char *) * i);
	i = 0;
	while (str[i] != ' ' && str[i] != '\0')
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

t_dlist		*ft_add_start_d_list(t_dlist *list, char *line)
{
	t_node		*new;

	new = malloc(sizeof(*new));
	if (list != NULL)
	{
		new->cmd = ft_strdropcmd(line);
		new->arg = ft_strsplit(line, ' ');
		new->prev = NULL;
		if (list->tail == NULL)
		{
			new->next = NULL;
			list->head = new;
			list->tail = new;
		}
		else
		{
			list->head->prev = new;
			new->next = list->head;
			list->head = new;
		}
		list->length++;
	}
	return (list);
}
