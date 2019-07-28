# Makefile for c programmes
# Copyright (c) 2018-19 Fred Crowson <fred@crowsons.com>
# make ARGS="filename" 

CC = /usr/bin/clang
CC_FLAGS = -Wall -pedantic -Werror=implicit-function-declaration \
			-Werror=format -g

all:
	${CC} ${ARGS}.c ${CC_FLAGS} -o ${ARGS}

clean:
	rm ${ARGS}.c ${ARGS}
