CXX	=	gcc
FLAGS	=	-Wall -O3 -ggdb
SOURCE	=	main.c convolution.c
BIN	=	main

all:
	$(CXX) $(FLAGS) $(SOURCE) -o $(BIN)

clean:
	rm -f *~ $(BIN)
