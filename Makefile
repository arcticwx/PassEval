CC = gcc
OBJ = passeval

all:	compile

compile:
	$(CC) -o $(OBJ) src/main.c