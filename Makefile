##
## Makefile for Makefile in /home/rosey/rendu/sudoki-bi
## 
## Made by rosey
## Login   <rosey@epitech.net>
## 
## Started on  Sat Mar  1 08:34:31 2014 rosey
## Last update Sun Mar  2 22:08:41 2014 Delta Quentin
##

CC	= gcc

RM	= rm -f

NAME	= sudoki-bi

SRC	= sudoki.c

OBJS	= $(SRC:.c=.o)

CFLAGS	+= -W -Werror
CFLAGS	+= -Wall -Wextra
CFLAGS	+= -ansi -I. -pedantic

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
