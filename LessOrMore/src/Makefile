CC = gcc
CFLAGS = -g -Wall -O2 -I../include/
LDFLAGS = -lm
RM = rm

jeux : game.o main.o
	$(CC) -o jeux $(LDFLAGS) main.o game.o

%.o : %.c
	$(CC) -c $(CFLAGS) $<

all : test

clean :
	$(RM) *.o

clear :
	clear