CC=gcc
CFLAGS=-Wall -pedantic -std=gnu99
CLIBS=-lm

all: test.o
	${CC} ${CFLAGS} ${CLIBS} test.o -o test

test.o: test.c test.h
	${CC} ${CFLAGS} -c test.c

clean:
	rm test test.o
