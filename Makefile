CC=gcc
CFLAGS=-g -Wall
all:main

main: main.o arrays.o
	$(CC) main.o arrays.o -o startarray

main.o: main.c arrays.h
	$(CC) $(CFLAGS) -c main.c

arrays.o: arrays.c arrays.h
	$(CC) $(CFLAGS) -c arrays.c

clean:
	rm -f *.o *~ startarray

debug: all
	cgdb startarray

ddd: all
	ddd startarray
