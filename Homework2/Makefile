CFLAGS=-lm

program.bin: cube.o sphere.o cylinder.o main.o
	gcc $(CFLAGS) cube.o sphere.o cylinder.o main.o -o calc.bin

main.o: main.c
	gcc $(CFLAGS) main.c -c

cube.o: cube.c
	gcc $(CFLAGS) cube.c -c

sphere.o: sphere.c
	gcc $(CFLAGS) sphere.c -c 

cylinder.o: cylinder.c
	gcc $(CFLAGS) cylinder.c -c 
