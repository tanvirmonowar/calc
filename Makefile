calc: main.o operation.o
	gcc main.o operation.o -o calc
main.o: main.c operation.h
	gcc -c main.c
operation.o: operation.c operation.h
	gcc -c operation.c
