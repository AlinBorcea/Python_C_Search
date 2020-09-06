flags = -g -std=c11

main: main.o input.o search.o
	gcc $(flags) -o main.exe main.o input.o search.o

main.o: main.c input/input.h search/search.h
	gcc $(flags) -c main.c

input.o: input/input.c input/input.h
	gcc $(flags) -c input/input.c

search.o: search/search.c search/search.h
	gcc $(flags) -c search/search.c