.PHONY: main

run: main
	./main
main: main.c
	gcc -O3 -o main main.c
