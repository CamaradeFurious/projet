CC := gcc  
FLAGS := -std=c99 -Wall -Werror -Wextra

build: 
	$(CC) $(FLAGS) -c main.c
	$(CC) $(FLAGS) -c menu.c
	$(CC) $(FLAGS) main.o menu.o -o bin/main

clean:
	rm bin/main
