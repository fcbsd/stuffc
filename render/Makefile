# Makefile for render programmes
# Copyright (c) 2019 Fred Crowson <fred@crowsons.com>
# make on OpenBSD
ARGS = renderopenbsd
OUTS = render

CC = /usr/bin/clang
CC_FLAGS = \
 -Wall -pedantic \
 -Werror -g
INCLUDES = \
 -I/usr/X11R6/include/freetype2 
LIB = -L/usr/X11R6/lib -L/usr/local/lib -lfreetype -lpng

all:
	${CC} ${INCLUDES} ${LIB} ${CC_FLAGS} -o ${OUTS} -v ${ARGS}.c

clean:
	rm ${OUTS}
