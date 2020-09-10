CC=gcc
CFLAGS='-g -Wall -Wextra' make

inventory: inventory.o readline.o
	$(CC) -g -o inventory inventory.o readline.o

inventory.o: inventory.c readline.h
	$(CC) -c inventory.c

readline.o: readline.c readline.h
	$(CC) -c readline.c