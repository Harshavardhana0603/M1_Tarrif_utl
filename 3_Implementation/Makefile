#Target name : Dependencies
#<TAB>Command 
SRC = main.c
INC = inc
CFLAGS=-I$(INC)

OBJ= main.o

all.out : $(OBJ)
	gcc $^ -I$(INC) -o $@


run: target 
	./all.out

clean: 
	rm all.out *.o
