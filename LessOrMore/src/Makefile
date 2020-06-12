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

#tar :
#	$(RM) test
#	tar -cvf ../Exercice1_AGUILAR.tar ../Exercice1_AGUILAR/
#	gzip ../Exercice1_AGUILAR.tar
#	cp ../Exercice1_AGUILAR.tar.gz /mnt/c/Users/aguil/Desktop/
