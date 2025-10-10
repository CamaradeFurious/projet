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
	$(CC) $(FLAGS) -c forme/autre/groupe.c
	$(CC) $(FLAGS) -c forme/autre/traj.c
	$(CC) $(FLAGS) -c forme/ligne/enchainement.c
	$(CC) $(FLAGS) -c forme/polygone/decagone/decagone.c
	$(CC) $(FLAGS) -c forme/polygone/heptagone/heptagone.c
	$(CC) $(FLAGS) -c forme/polygone/hexagone/hexagone.c
	$(CC) $(FLAGS) -c forme/polygone/nonagone/nonagone.c
	$(CC) $(FLAGS) -c forme/polygone/octogone/octogone.c
	$(CC) $(FLAGS) -c forme/polygone/pentagone/pentagone.c
	$(CC) $(FLAGS) -c forme/polygone/trygone/triangle.c

	$(CC) $(FLAGS) main.o menu.o cercle.o ellipses.o octogone.o groupe.o traj.o enchainement.o decagone.o ligne.o heptagone.o nonagone.o hexagone.o carre.o rectangle.o pentagone.o triangle.o -o bin/main

clean:
	rm bin/main
