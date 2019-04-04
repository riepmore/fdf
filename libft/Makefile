# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/22 00:45:51 by pmore             #+#    #+#              #
#    Updated: 2014/10/10 18:58:35 by pierremore       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = includes/
SRCS = \
		ft_atoi.c \
		ft_isascii.c \
		ft_strcat.c \
		ft_strcmp.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_strcpy.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_isdigit.c \
		ft_strncpy.c \
		ft_strdup.c \
		ft_tolower.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strclr.c \
		ft_strdel.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strnew.c \
		ft_strsplit.c \
		ft_strjoin.c \
		ft_putendl.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_putlst.c \
		ft_puttdstr.c \
		get_next_line.c \
		ft_printf.c \
		ft_printfannex.c \
		ft_printfsecondannex.c \
		ft_abs.c \
		ft_sqrt.c \
		ft_fabs.c \
		ft_append.c \
		ft_istrdigit.c \
		ft_new_d_list.c \
		ft_add_start_d_list.c \
		ft_add_end_d_list.c \
		ft_print_list.c \
		ft_checkchar.c \
		ft_nblen.c \
		ft_strjoinwchar.c \
		free_tab.c \
		ft_ctabdup.c

OBJECTS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c -g $(FLAGS) $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(HEAD) $(OBJECTS)
	@echo Creating $(NAME)...
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)
	@echo Removing $(OBJECTS)...

fclean: clean
	/bin/rm -f $(NAME)
	@echo Removing $(NAME)...

re: fclean all
