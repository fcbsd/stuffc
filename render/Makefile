# Makefile for render programmes
# Copyright (c) 2019 Fred Crowson <fred@crowsons.com>
# make on Centos 7.6-1810

ARGS = render

CC = /usr/bin/clang
CC_FLAGS = \
 -Wall -pedantic \
 -Werror=implicit-function-declaration -Werror=format -g
INCLUDES = \
 -I/usr/local/include/freetype1 \
 -I/usr/local/include/libpng16 

all:
	${CC} ${INCLUDES} ${ARGS}.c ${CC_FLAGS} -o ${ARGS}

clean:
	rm ${ARGS}
