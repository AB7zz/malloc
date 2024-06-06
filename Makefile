CFLAGS=-Wall -Wextra -std=c11 -pedantic -ggdb -g
CC = gcc

heap: main.c
	$(CC) $(CFLAGS) -o heap main.c