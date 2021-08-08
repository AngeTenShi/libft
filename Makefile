# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 16:57:00 by anggonza          #+#    #+#              #
#    Updated: 2021/08/08 15:34:33 by anggonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# rules : $(NAME) , all, clean, fclean, re
NAME = libft.a

SRC = ft_isalpha \
	  ft_isdigit \
	  ft_isalnum \
	  ft_isascii \
	  ft_isprint \
	  ft_strlen \
	  ft_memset \
	  ft_bzero \
	  ft_memcpy \
	  ft_memmove \
	  ft_strlcpy \
	  ft_strlcat \
	  ft_toupper \
	  ft_tolower \
	  ft_strchr \
	  ft_strrchr \
	  ft_strncmp \
	  ft_memchr \
	  ft_memcmp \
	  ft_strnstr \
	  ft_atoi \
	  ft_calloc \
	  ft_strdup \
	  ft_substr \
	  ft_strjoin \
	  ft_strtrim \
	  ft_split \
	  ft_itoa \
	  ft_strmapi \
	  ft_striteri \
	  ft_putchar_fd \
	  ft_putstr_fd \
	  ft_putendl_fd \
	  ft_putnbr_fd \

BONUS	= ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstsize.c \

HEADER = includes
OBJS	= ${SRCS:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}

CC = gcc
AR = ar rcs
FLAGS = -Wall -Wextra -Werror 

%.o : %.c
	$(CC) -c ${FLAGS} -o $@ $<

all: 
	$(AR) $(NAME) ${OBJS}

$(NAME): all

clean:
	/bin/rm -rf ${OBJS}

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

bonus : ${OBJS} ${OBJS_BONUS}
	${AR} ${NAME} ${OBJS} ${OBJS_BONUS}

.PHONY:	all clean fclean re $(NAME)
