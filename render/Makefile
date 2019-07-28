# Makefile for render programmes
# Copyright (c) 2019 Fred Crowson <fred@crowsons.com>
# make 

ARGS = render

CC = /usr/bin/clang
CC_FLAGS = -I/usr/local/include/freetype1 \ 
 -I/usr/local/include/libpng16  \
 -Wall -pedantic \
 -Werror=implicit-function-declaration -Werror=format -g

all:
	${CC} ${ARGS}.c ${CC_FLAGS} -o ${ARGS}

clean:
	rm ${ARGS}.c ${ARGS}
