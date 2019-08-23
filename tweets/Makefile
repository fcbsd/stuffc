# Makefile for tweeted c programmes
# Copyright (c) 2018-19 Fred Crowson <fred@crowsons.com>
# make ARGS="filename.c" 

CC = /usr/bin/clang
CC_FLAGS = -Wall -pedantic -Werror=implicit-function-declaration \
			-Werror=format -g

all:
	${CC} ${ARGS} ${CC_FLAGS} -o tweetx

clean:
	rm tweetx *.core
