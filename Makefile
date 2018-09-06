CFLAGS = -O
CC = gcc

projeto1:projeto1.o readgml.o
	$(CC) $(CFLAGS) -o projeto1 projeto1.o readgml.o

projeto1.o:projeto1.c readgml.h network.h Makefile
	$(CC) $(CFLAGS) -c projeto1.c

readgml.o:readgml.c network.h Makefile
	$(CC) $(CFLAGS) -c readgml.c