/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/18 20:46:03 by pmore             #+#    #+#             */
/*   Updated: 2014/10/12 15:54:19 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRUCT_H
# define LIBFT_STRUCT_H

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_read
{
	int				size;
	int				index;
	int				fd;
	char			*read;
	struct s_read	*next;
}					t_read;

typedef struct		s_print
{
	va_list		ap;
	int			j;
	int			i;
	char		c;
	char		*s;
	int			d;
}					t_print;

typedef struct		s_node
{
	char			*oldpwd;
	char			*cmd;
	char			**arg;
	char			*operator;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct		s_dlist
{
	size_t		length;
	t_node		*tail;
	t_node		*head;
}					t_dlist;

#endif
