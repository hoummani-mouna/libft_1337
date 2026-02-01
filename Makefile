# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhoumman <mhoumman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 14:57:22 by mhoumman          #+#    #+#              #
#    Updated: 2025/11/03 14:37:33 by mhoumman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
       ft_atoi.c ft_bzero.c ft_calloc.c ft_itoa.c ft_memchr.c ft_memcmp.c \
       ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
       ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c  ft_strdup.c \
       ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
       ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
       ft_substr.c ft_tolower.c ft_toupper.c 

SRCBS = ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstiter_bonus.c ft_lstadd_back_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c \
		ft_lstsize_bonus.c ft_lstdelone_bonus.c\

OBJS = $(SRCS:.c=.o)
OBJBS = $(SRCBS:.c=.o)
NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

%.o : %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
bonus: $(OBJBS)
	ar rcs $(NAME) $(OBJBS)
clean:
	$(RM) $(OBJS) $(OBJBS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re bonus
