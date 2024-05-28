# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:50:09 by hrochd            #+#    #+#              #
#    Updated: 2023/12/07 01:22:38 by hrochd           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRCS = ft_atoi.c ft_strlcat.c ft_bzero.c ft_memchr.c ft_strlcpy.c ft_calloc.c \
ft_memcmp.c ft_strlen.c ft_isalnum.c ft_memcpy.c ft_strmapi.c ft_isalpha.c \
ft_memmove.c ft_strncmp.c ft_isascii.c ft_memset.c ft_strnstr.c ft_isdigit.c \
ft_putchar_fd.c ft_strrchr.c ft_isprint.c ft_putendl_fd.c ft_strtrim.c ft_itoa.c \
ft_putnbr_fd.c ft_substr.c ft_putstr_fd.c ft_tolower.c ft_split.c ft_toupper.c \
ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c

BSRCS = ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstsize_bonus.c \
ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstclear_bonus.c ft_lstnew_bonus.c \
ft_lstiter_bonus.c ft_lstmap_bonus.c

OFILES = $(SRCS:.c=.o)

BOFILES = $(BSRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = rm -f

all : $(NAME)

$(NAME) : $(OFILES)
	ar rsc $(NAME) $(OFILES)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< 

bonus : $(BOFILES)
	ar rsc $(NAME) $(BOFILES)

clean :
	$(RM) $(OFILES) $(BOFILES)

fclean : clean
	$(RM) $(NAME)

re : fclean all
