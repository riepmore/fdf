/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 00:55:36 by pmore             #+#    #+#             */
/*   Updated: 2014/10/11 17:27:46 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft_struct.h"

# define BUFF_SIZE	4096
# define PI			3.1415926535897932384626433832795

void		ft_putendl(char const *s);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_striter(char *s, void (*f)(char *));
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_memdel(void **ap);
void		*ft_memalloc(size_t size);
void		ft_putnbr(int n);
void		ft_putchar(char c);
void		ft_putstr(const char *s);
void		*ft_memmove(void *s1, const void *s2, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void		ft_puttdstr(char **td_tab);
char		*ft_strnew(size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(char *src);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
char		*ft_strcpy(char *s1, const char *s2);
char		*ft_strncpy(char *s1, const char *s2, size_t n);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strrchr(const char *s, int c);
char		*ft_append(char *s, char c);
int			ft_tolower(int c);
int			ft_strlen(const char *s);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_isascii(int c);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_toupper(int c);
int			ft_isprint(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			get_next_line(const int fd, char **line);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		**ft_strsplit(char const *s, char c);
t_list		*ft_lstnew(void const *content, size_t content_size);
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void		ft_lstdelone(t_list **alst);
void		ft_lstdel(t_list **alst);
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void		ft_putlst(t_list *list);
int			find_n_len(int n);
int			check_i(char *str, int i);
int			ft_printmodulo(char c, va_list ap);
int			ft_printd(int d, va_list ap);
int			ft_prints(char *s, va_list ap);
int			ft_printc(char c, va_list ap);
int			ft_printfbis(char *format, int i, va_list ap);
int			ft_printf(const char *str, ...);
int			ft_istrdigit(char *str);
long		ft_abs(long value);
double		ft_sqrt(double x);
double		ft_fabs(double value);
int			ft_nblen(int n);
char		*ft_strjoinwchar(char *s1, char c, char *s2);
void		free_char_tab(char **tab);
void		free_int_tab(int **tab, int len);
int			ft_checkchar(char *str, char c);
char		**ft_ctabdup(char **tab);

t_dlist		*ft_new_d_list(void);
t_dlist		*ft_add_start_d_list(t_dlist *list, char *line);
t_dlist		*ft_add_end_d_list(t_dlist *list, char *line);
void		ft_print_list(t_dlist *list);

#endif
