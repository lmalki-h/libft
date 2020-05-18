# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmalki-h <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:33:27 by lmalki-h          #+#    #+#              #
#    Updated: 2020/02/03 18:14:06 by lmalki-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

EXT = c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_NAME = ft_utoa.c \
		   ft_atoi.c \
		   ft_bzero.c \
		   ft_calloc.c \
		   ft_isalnum.c \
		   ft_isalpha.c \
		   ft_isascii.c \
		   replace.c \
		   ft_isdigit.c \
		   ft_isprint.c \
		   ft_itoa.c \
		   ft_memccpy.c \
		   ft_memchr.c \
		   ft_memcmp.c \
		   ft_memcpy.c \
		   ft_memmove.c \
		   ft_memset.c \
		   ft_putchar_fd.c \
		   ft_putendl_fd.c \
		   ft_putnbr_fd.c \
		   ft_putstr_fd.c \
		   ft_strchr.c \
		   ft_strdup.c \
		   ft_strjoin.c \
		   ft_strjoinfree.c \
		   ft_strlcat.c \
		   ft_strlcpy.c \
		   ft_strlen.c \
		   ft_strncmp.c \
		   ft_strnstr.c \
		   ft_strrchr.c \
		   ft_strtrim.c \
		   ft_split.c \
		   ft_strmapi.c \
		   ft_substr.c \
		   ft_tolower.c \
		   ft_toupper.c \
		   ft_itohex.c \
		   capitalize.c \
		   ft_isspace.c \
		   add.c \
		   contains.c \
		   ft_putwchar_fd.c \
		   ft_putwchar_utils.c \
		   ft_patoi.c \
		   get_next_line.c \
		   ft_lstcount.c \
		   ft_lstadd_back.c \
		 ft_lstadd_front.c \
			 ft_lstclear.c \
			 ft_lstdelone.c \
			 ft_lstiter.c \
			 ft_lstlast.c \
			 ft_lstmap.c \
			 ft_lstnew.c \
			 ft_lstsize.c \
			 ft_buffadd_back.c \
			 ft_buffcount.c \
			 ft_buffnew.c \
			 ft_bufflast.c \
			 inset.c \
			 empty_line.c \

OBJS = $(SRC_NAME:.$(EXT)=.o)	

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)
	ranlib $@

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

flcean: fclean

re: fclean
	make

norm:
	norminette

.PHONY: all clean fclean norm
