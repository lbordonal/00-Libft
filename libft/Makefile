# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbordona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 17:40:34 by lbordona          #+#    #+#              #
#    Updated: 2022/11/10 11:05:20 by lbordona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC_OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(SRC_OBJS)
	@$(AR) $(NAME) $(SRC_OBJS)
	@echo "LIBFT - Done!"

clean:
	@$(RM) $(SRC_OBJS)
	@$(RM) $(BONUS_OBJS)
	@$(RM) a.out
	@$(RM) libft.h.gch
	@echo "CLEAN - Done!"

fclean:
	@$(RM) $(SRC_OBJS)
	@$(RM) $(BONUS_OBJS)
	@$(RM) a.out
	@$(RM) libft.h.gch
	@$(RM) $(NAME)
	@echo "FCLEAN - Done!"

re: fclean all
	@echo "RE - Done!"

test: all
	@$(CC) $(CFLAGS) $(SRCS)
	@echo "TEST - Done!"
	@echo "----------------------\n"
	@./a.out

bonus: $(SRC_OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $(SRC_OBJS) $(BONUS_OBJS)
	@echo "LIBFT BONUS - Done!"

test_bonus: bonus
	@$(CC) $(CFLAGS) $(BONUS)
	@echo "TEST BONUS - Done!"
	@echo "----------------------\n"
	@./a.out
