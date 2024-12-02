all: Product.o FileHandler.o main.o
	g++ Product.o FileHandler.o main.o -o exec

Product.o: Product.cpp
	g++ -c Product.cpp

FileHandler.o: FileHandler.cpp
	g++ -c FileHandler.cpp

main.o: main.cpp
	g++ -c main.cpp

run: all
	./exec

clean:
	rm -f *.o exec
