# Makefile for c programmes
# Copyright (c) 2018-2019 Fred Crowson <fred@crowsons.com>
# Call using: 
# 	make ARGS="filename"
# or
# 	make flags ARGS="filename" FLAGS="-clang_flags"

CC = /usr/bin/clang
CC_FLAGS = -Wall -pedantic -Werror=implicit-function-declaration \
			-Werror=format -g

all:
	${CC} ${ARGS}.c ${CC_FLAGS} -o ${ARGS}

flags:
	${CC} ${ARGS}.c ${CC_FLAGS} ${FLAGS} -o ${ARGS}

clean:
	rm ${ARGS}
