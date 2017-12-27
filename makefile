#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okuznets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 18:57:08 by okuznets          #+#    #+#              #
#    Updated: 2017/11/07 19:08:09 by okuznets         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=gcc
CFLAGS=-c -Wall -Wextra -Werror
SOURCES=*.c
NAME=libft.a
OBJECTS=$(SOURCES:.c=.o)

all: $(NAME)
$(NAME): $(OBJECTS)
	ar rc $(NAME) *.o
$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES)
test: all
	cd ../libft-unit-test-master && $(MAKE) f
clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all