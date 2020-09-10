CC=gcc
CFLAGS='-g -Wall -Wextra' make

date: main.o dates.o
	$(CC) -g -o date main.o dates.o

main.o: main.c dates.h
	$(CC) -c main.c

dates.o: dates.c dates.h
	$(CC) -c dates.c