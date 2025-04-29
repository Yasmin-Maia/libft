# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 16:22:54 by ymaia-do          #+#    #+#              #
#    Updated: 2025/04/17 15:47:28 by yasmin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GNL_PATH = get_next_line
GNL_SRC = $(wildcard $(GNL_PATH)/*.c)
GNL_OBJ = $(GNL_SRC:.c=.o)

FT_PRINTF_PATH = ft_printf
FT_PRINTF_SRC = $(wildcard $(FT_PRINTF_PATH)/*.c)
FT_PRINTF_OBJ = $(FT_PRINTF_SRC:.c=.o)

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_calloc.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_putstr_fd.c \
	   ft_split.c \
	   ft_strchr.c \
	   ft_strdup.c \
	   ft_striteri.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strmapi.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strtrim.c \
	   ft_substr.c \
	   ft_tolower.c \
	   ft_toupper.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all: deps $(NAME)

deps: get_gnl get_ft_printf
	@echo "[$(GNR)Nothing to be done!$(D)]"

get_ft_printf:
	@if [ -d "$(FT_PRINTF_PATH)" ]; then \
		echo "[$(GNR)ft_printf$(D)] folder found"; \
	else \
		echo "Getting $(YLW)ft_printf$(D)"; \
		git clone git@github.com:Yasmin-Maia/ft_printf.git; \
		echo "$(GNR)Done dowloading ft_printf$(D)"; \
	fi

get_gnl:
	@if [ -d "$(GNL_PATH)" ]; then\
		echo "[$(GRN)Get_next_line$(D)] folder found"; \
	else \
		echo "Getting $(YLW)Get_next_line$(D)"; \
		git clone git@github.com:Yasmin-Maia/get_next_line.git; \
		echo "$(GRN)Done dowloading Get_next_line$(D)"; \
	fi

$(NAME): $(GNL_OBJ) $(OBJS) $(FT_PRINTF_OBJ)
	@ar rcs $(NAME) $(OBJS) $(FT_PRINTF_OBJ) $(GNL_OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(FT_PRINTF_PATH)/%.o: $(FT_PRINTF_PATH)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(GNL_PATH)/%.o: $(GNL_PATH)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(GNL_OBJ)
	@$(MAKE) -C $(FT_PRINTF_PATH) clean

fclean: clean
	@rm -f $(OBJS) $(GNL_OBJ) $(FT_PRINTF_OBJ)
	
re: fclean all

.PHONY: all clean fclean re deps get_gnl get_ft_printf
