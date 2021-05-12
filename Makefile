default: main

program.o: main.c
	gcc -c main.c -o main.o

program: main.o
	gcc main.o -o main

clean:
	-rm -f main.o
	-rm -f main
