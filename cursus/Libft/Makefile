# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebachill <ebachill@student.42malagaom    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 13:04:46 by ebachill          #+#    #+#              #
#    Updated: 2023/04/24 10:23:46 by ebachill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
OBJECTS = ft_isalpha.o\
ft_isdigit.o\
ft_isalnum.o\
ft_isascii.o\
ft_isprint.o\
ft_strlen.o\
ft_memset.o\
ft_bzero.o\
ft_memcpy.o\
ft_memmove.o\
ft_strlcpy.o\
ft_strlcat.o\
ft_toupper.o\
ft_tolower.o\
ft_strchr.o\
ft_strrchr.o\
ft_strncmp.o\
ft_memchr.o\
ft_memcmp.o\
ft_strnstr.o\
ft_atoi.o\
ft_calloc.o\
ft_strdup.o\
ft_substr.o\
ft_strjoin.o\
ft_strtrim.o\
ft_split.o\
ft_itoa.o\
ft_strmapi.o\
ft_striteri.o\
ft_putchar_fd.o\
ft_putstr_fd.o\

$(NAME):$(OBJECTS)
	@ar rsc $(NAME) $(OBJECTS)

ft_isalpha.o : ft_isalpha.c libft.h
	@$(CC) -c $(FLAGS) ft_isalpha.c -o ft_isalpha.o

ft_isdigit.o : ft_isdigit.c libft.h
	@$(CC) -c $(FLAGS) ft_isdigit.c -o ft_isdigit.o

ft_isalnum.o : ft_isalnum.c libft.h
	@$(CC) -c $(FLAGS) ft_isalnum.c -o ft_isalnum.o

ft_isascii.o : ft_isascii.c libft.h
	@$(CC) -c $(FLAGS) ft_isascii.c -o ft_isascii.o

ft_isprint.o : ft_isprint.c libft.h
	@$(CC) -c $(FLAGS) ft_isprint.c -o ft_isprint.o

ft_strlen.o : ft_strlen.c libft.h
	@$(CC) -c $(FLAGS) ft_strlen.c -o ft_strlen.o

ft_memset.o : ft_memset.c libft.h
	@$(CC) -c $(FLAGS) ft_memset.c -o ft_memset.o

ft_bzero.o : ft_bzero.c libft.h
	@$(CC) -c $(FLAGS) ft_bzero.c -o ft_bzero.o

ft_memcpy.o : ft_memcpy.c libft.h
	@$(CC) -c $(FLAGS) ft_memcpy.c -o ft_memcpy.o

ft_memmove.o : ft_memmove.c libft.h
	@$(CC) -c $(FLAGS) ft_memmove.c -o ft_memmove.o

ft_strlcpy.o : ft_strlcpy.c libft.h
	@$(CC) -c $(FLAGS) ft_strlcpy.c -o ft_strlcpy.o

ft_strlcat.o : ft_strlcat.c libft.h
	@$(CC) -c $(FLAGS) ft_strlcat.c -o ft_strlcat.o

ft_toupper.o : ft_toupper.c libft.h
	@$(CC) -c $(FLAGS) ft_toupper.c -o ft_toupper.o

ft_tolower.o : ft_tolower.c libft.h
	@$(CC) -c $(FLAGS) ft_tolower.c -o ft_tolower.o

ft_strchr.o : ft_strchr.c libft.h
	@$(CC) -c $(FLAGS) ft_strchr.c -o ft_strchr.o

ft_strrchr.o : ft_strrchr.c libft.h
	@$(CC) -c $(FLAGS) ft_strrchr.c -o ft_strrchr.o

ft_strncmp.o : ft_strncmp.c libft.h
	@$(CC) -c $(FLAGS) ft_strncmp.c -o ft_strncmp.o

ft_memchr.o : ft_memchr.c libft.h
	@$(CC) -c $(FLAGS) ft_memchr.c -o ft_memchr.o

ft_memcmp.o : ft_memcmp.c libft.h
	@$(CC) -c $(FLAGS) ft_memcmp.c -o ft_memcmp.o

ft_strnstr.o : ft_strnstr.c libft.h
	@$(CC) -c $(FLAGS) ft_strnstr.c -o ft_strnstr.o

ft_atoi.o : ft_atoi.c libft.h
	@$(CC) -c $(FLAGS) ft_atoi.c -o ft_atoi.o

ft_calloc.o : ft_calloc.c libft.h
	@$(CC) -c $(FLAGS) ft_calloc.c -o ft_calloc.o

ft_strdup.o : ft_strdup.c libft.h
	@$(CC) -c $(FLAGS) ft_strdup.c -o ft_strdup.o

ft_substr.o : ft_substr.c libft.h
	@$(CC) -c $(FLAGS) ft_substr.c -o ft_substr.o

ft_strjoin.o : ft_strjoin.c libft.h
	@$(CC) -c $(FLAGS) ft_strjoin.c -o ft_strjoin.o

ft_strtrim.o : ft_strtrim.c libft.h
	@$(CC) -c $(FLAGS) ft_strtrim.c -o ft_strtrim.o

ft_split.o : ft_split.c libft.h
	@$(CC) -c $(FLAGS) ft_split.c -o ft_split.o

ft_itoa.o : ft_itoa.c libft.h
	@$(CC) -c $(FLAGS) ft_itoa.c -o ft_itoa.o

ft_strmapi.o : ft_strmapi.c libft.h
	@$(CC) -c $(FLAGS) ft_strmapi.c -o ft_strmapi.o

ft_striteri.o : ft_striteri.c libft.h
	@$(CC) -c $(FLAGS) ft_striteri.c -o ft_striteri.o

ft_putchar_fd.o : ft_putchar_fd.c libft.h
	@$(CC) -c $(FLAGS) ft_putchar_fd.c -o ft_putchar_fd.o

ft_putstr_fd.o : ft_putstr_fd.c libft.h
	@$(CC) -c $(FLAGS) ft_putstr_fd.c -o ft_putstr_fd.o

all : $(NAME)

.PHONY: re all fclean clean
clean:
	@rm -f $(OBJECTS)
fclean: clean
	@rm -f $(NAME) $(OBJECTS)
re: fclean all
