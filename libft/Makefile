#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/01/09 07:38:16 by tpayen            #+#    #+#             *#
#*   Updated: 2015/03/16 08:46:09 by tpayen           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

SRCFILES_PART1 =	ft_memset.c		\
					ft_bzero.c		\
					ft_memcpy.c		\
					ft_memccpy.c	\
					ft_memmove.c	\
					ft_memchr.c		\
					ft_memcmp.c		\
					ft_strlen.c		\
					ft_strdup.c		\
					ft_strcpy.c		\
					ft_strncpy.c	\
					ft_strcat.c		\
					ft_strncat.c	\
					ft_strlcat.c	\
					ft_strchr.c		\
					ft_strrchr.c	\
					ft_strstr.c		\
					ft_strnstr.c	\
					ft_strcmp.c		\
					ft_strncmp.c	\
					ft_atoi.c		\
					ft_isalpha.c	\
					ft_isdigit.c	\
					ft_isalnum.c	\
					ft_isascii.c	\
					ft_isprint.c	\
					ft_toupper.c	\
					ft_tolower.c	\

SRCFILES_PART2 =	ft_memalloc.c	\
					ft_memdel.c		\
					ft_strnew.c		\
					ft_strdel.c		\
					ft_strclr.c		\
					ft_striter.c	\
					ft_striteri.c	\
					ft_strmap.c		\
					ft_strmapi.c	\
					ft_strequ.c		\
					ft_strnequ.c	\
					ft_strsub.c		\
					ft_strjoin.c	\
					ft_strtrim.c	\
					ft_strsplit.c	\
					ft_itoa.c		\
					ft_putchar.c	\
					ft_putstr.c		\
					ft_putendl.c	\
					ft_putnbr.c		\
					ft_putchar_fd.c	\
					ft_putstr_fd.c	\
					ft_putendl_fd.c	\
					ft_putnbr_fd.c	\

SRCFILES_BONUS =	ft_lstnew.c		\
					ft_lstdelone.c	\
					ft_lstdel.c		\
					ft_lstadd.c		\
					ft_lstiter.c	\
					ft_lstmap.c		\

SRCFILES_MY_BONUS =	ft_isupper.c	\
					ft_islower.c 	\
					ft_isspace.c	\
					ft_intlen.c		\
					ft_realloc.c	\
					ft_lstpush.c	\
					ft_strswap.c	\
					ft_bcopy.c		\

SRCFILES = $(SRCFILES_PART1) $(SRCFILES_PART2) $(SRCFILES_BONUS) $(SRCFILES_MY_BONUS)

SRC_OBJ = $(SRCFILES:.c=.o)

CC = clang
FLAGS = -Wextra -Werror -Wall

NAME = libft.a

all: $(NAME)

$(NAME): $(SRC_OBJ)
	ar rc $@ $^

%.o: %.c
	$(CC) -o $@ -c $< $(FLAGS)

.PHONY: clean fclean re

clean:
	rm -f $(SRC_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
