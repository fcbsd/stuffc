# Makefile for c programmes
# Copyright (c) 2018 Fred Crowson <fred@crowsons.com>
# make ARGS="file.c" 

CC = /usr/bin/clang
CC_FLAGS = -Wall -pedantic -Werror=implicit-function-declaration \
			-Werror=format -g

all:
	${CC} ${ARGS} ${CC_FLAGS} -o out

clean:
	rm out
