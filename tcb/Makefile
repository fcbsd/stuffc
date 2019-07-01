# Makefile for c programmes
# Call using: make ARGS="filename"
# Copyright (c) 2018-2019 Fred Crowson <fred@crowsons.com>

CC = /usr/bin/clang
CC_FLAGS = -Wall -pedantic -Werror=implicit-function-declaration \
			-Werror=format -g

all:
	${CC} ${ARGS}.c ${CC_FLAGS} -o ${ARGS}

clean:
	rm ${ARGS}
