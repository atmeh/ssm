CC=g++
CFLAGS= -Wextra -Wall

SRC = $(wildcard src/*.cc)
OBJ = $(SRC:.c=.o)

run: $(OBJ)
	$(CC) -o ./bin/sm $^

%.o: %.c
	$(CC) -o$@ -c $< $(CFLAGS)
