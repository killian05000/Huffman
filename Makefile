main.exe: main.o Node.o Tree.o
	g++ -Wall -o main.exe main.o Node.o Tree.o

main.o: main.cpp Node.cpp Tree.cpp
	g++ -Wall -c -std=c++11 main.cpp Node.cpp Tree.cpp

Tree.o: Tree.cpp Node.cpp
	g++ -Wall -c -std=c++11 Node.cpp Tree.cpp

Node.o: Node.cpp
	g++ -Wall -c -std=c++11 Node.cpp

clean:
	rm *o
