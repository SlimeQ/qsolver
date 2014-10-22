CC=gcc
CFLAGS=-Wall -pedantic -std=gnu99
CLIBS=-lm

all: test.o qsolve.o
	${CC} ${CFLAGS} ${CLIBS} qsolve.o -o qsolve

test.o: test.c test.h
	${CC} ${CFLAGS} -c test.c

clean:
	rm test test.o qsolve qsolve.o

test: test.o
	${CC} ${CFLAGS} ${CLIBS} test.o -o test
	./test < f.in > f.out
	diff f.out fok.out
