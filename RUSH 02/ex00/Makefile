# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 11:39:09 by clebarbi          #+#    #+#              #
#    Updated: 2017/08/20 19:47:52 by clebarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
COLLE00 = colle-00
COLLE01 = colle-01
COLLE02 = colle-02
COLLE03 = colle-03
COLLE04 = colle-04

CC = gcc
FLAG = -Wall -Werror -Wextra -xc

FILESR00 = src_colle00/colle00/*.c
FILESR01 = src_colle00/colle01/*.c
FILESR02 = src_colle00/colle02/*.c
FILESR03 = src_colle00/colle03/*.c
FILESR04 = src_colle00/colle04/*.c
FILESR2 = src_colle02/main.c


HEADERS = Headers
LIB = Library

all: $(COLLE00) $(COLLE01) $(COLLE02) $(COLLE03) $(COLLE04)

$(COLLE00):
		$(CC) $(FLAG) $(FILESR00) -I $(HEADERS) -L $(LIB) -lft -o $(COLLE00)

$(COLLE01):
		$(CC) $(FLAG) $(FILESR01) -I $(HEADERS) -L $(LIB) -lft -o $(COLLE01)

$(COLLE02):
		$(CC) $(FLAG) $(FILESR02) -I $(HEADERS) -L $(LIB) -lft -o $(COLLE02)

$(COLLE03):
		$(CC) $(FLAG) $(FILESR03) -I $(HEADERS) -L $(LIB) -lft -o $(COLLE03)

$(COLLE04):
		$(CC) $(FLAG) $(FILESR04) -I $(HEADERS) -L $(LIB) -lft -o $(COLLE04)

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME) $(COLLE00) $(COLLE01) $(COLLE02) $(COLLE03) $(COLLE04)
