CC := gcc  
FLAGS := -std=c99 -Wall -Werror -Wextra

build: 
	$(CC) $(FLAGS) -c main.c
	$(CC) $(FLAGS) -c menu.c
	$(CC) $(FLAGS) -c forme/autre/cercle.c
	$(CC) $(FLAGS) -c forme/autre/ellipses.c
	$(CC) $(FLAGS) -c forme/ligne/ligne.c
	$(CC) $(FLAGS) -c forme/polygone/quadri/tetra/carre.c
	$(CC) $(FLAGS) -c forme/polygone/quadri/tetra/rectangle.c
	$(CC) $(FLAGS) -c forme/autre/traj.c
	$(CC) $(FLAGS) -c forme/ligne/enchainement.c
	$(CC) $(FLAGS) -c forme/polygone/quadri/tetra/polygone.c

	$(CC) $(FLAGS) main.o menu.o cercle.o ellipses.o   traj.o enchainement.o  ligne.o polygone.o carre.o rectangle.o -o bin/main

clean:
	rm bin/main
