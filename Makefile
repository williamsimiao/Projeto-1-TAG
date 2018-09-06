CFLAGS = -O
CC = gcc

projeto1:projeto1.o 
	$(CC) $(CFLAGS) -o projeto1 projeto1.o

projeto1.o:projeto1.c  Makefile
	$(CC) $(CFLAGS) -c projeto1.c