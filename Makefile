# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/07 16:55:33 by mbarbari          #+#    #+#              #
#    Updated: 2017/05/09 20:34:27 by barbare          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC ?= gcc
CX ?= clang++
GO ?= go

RM ?= rm -f
MKDIR ?= mkdir

all:
	$(CC) Colleen.c -o Colleen
	$(CC) Grace.c -o Grace
	$(CC) Sully.c -o Sully

go:
	$(GO) build -o Colleen_go Colleen.go
	$(GO) build -o Grace_go Grace.go
	$(GO) build -o Sully_go Sully.go

clean:
	$(RM) Colleen Colleen_* Grace Grace_* Sully Sully_*

fclean: clean

re: fclean all

print-% : ; $(info $* is $(flavor $*) variable set to [$($*)]) @true

.PHONY: clean fclean re all
