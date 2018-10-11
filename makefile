all: main.o listfunct.o
	gcc -o main.o listfunct.o
main.o: main.c
	gcc -c main.c
listfunct.o: listfunct.c listfunct.h
	gcc -c listfunct.c