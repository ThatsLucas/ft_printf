# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 11:14:55 by lle-duc           #+#    #+#              #
#    Updated: 2024/11/23 10:49:38 by lle-duc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE_DIR = ./
SRC_DIR = ./
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I $(INCLUDE_DIR)

BONUS_FILES = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c \

SRC_FILES = ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_memcpy.c \
ft_memmove.c \
ft_strjoin.c \
ft_strtrim.c \
ft_strchr.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_atoi.c \
ft_strdup.c \
ft_strlcpy.c \
ft_strncmp.c \
ft_strnstr.c \
ft_calloc.c \
ft_strlcat.c \
ft_itoa.c \
ft_memcmp.c \
ft_memchr.c \
ft_substr.c \
ft_split.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putdenl_fd.c \
ft_putnbr_fd.c \

OBJECTS = $(SRC_FILES:.c=.o)
BONUS_OBJECTS = $(BONUS_FILES:.c=.o)

ifdef BONUS_DONE
	SRC += $(BONUS_FILES)
	OBJECTS += $(BONUS_OBJECTS)
endif

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $^

%.o:%.c 
	cc $(FLAGS) $(OPTIONS) -o $@ $<

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	$(MAKE) BONUS_DONE=1
	
clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean bonus