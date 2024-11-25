# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 10:08:57 by lle-duc           #+#    #+#              #
#    Updated: 2024/11/25 15:10:30 by lle-duc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Dossiers
INCLUDE_DIR = ./include/
SRC_DIR = ./src/
OBJ_DIR = ./obj/
LIBFT_DIR = ./libft/

# Nom de la bibliothèque finale
NAME = libftprintf.a

# Options de compilation
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I $(INCLUDE_DIR)

# Fichiers sources et objets
SRC_FILES = $(SRC_DIR)ft_printf.c $(SRC_DIR)ft_printf_additional.c
OBJECTS = $(OBJ_DIR)ft_printf.o $(OBJ_DIR)ft_printf_additional.o 

# Libft.a
LIBFT = $(LIBFT_DIR)libft.a

# Règle par défaut : tout construire
all: $(NAME)

# Compiler libft.a si nécessaire
$(LIBFT):
	cd $(LIBFT_DIR) && make
	@mkdir -p $(OBJ_DIR)
	ar x $(LIBFT) --output=$(OBJ_DIR)

# Créer libftprintf.a en combinant les objets de ft_printf.c et libft.a
$(NAME): $(OBJECTS) $(LIBFT)
	ar rcs $(NAME) $(SRC_FT_PRINTF) $(OBJ_DIR)*.o

# Compilation des objets pour ft_printf et autres fichiers
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	cc $(FLAGS) $(OPTIONS) -o $@ $<

# Nettoyer les objets
clean:
	rm -rf $(OBJ_DIR)
	cd $(LIBFT_DIR) && make clean

# Nettoyer tout : objets, la lib et libft.a
fclean: clean
	rm -f $(NAME)
	cd $(LIBFT_DIR) && make fclean

# Refaire tout depuis zéro
re: fclean all

# Cibles qui ne correspondent pas à des fichiers
.PHONY: all re fclean clean
