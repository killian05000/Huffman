main.exe: main.o Node.o Tree.o
	g++ -Wall -o main.exe main.o Node.o Tree.o

main.o: src/main.cpp src/Node.cpp src/Tree.cpp hpp/Tree.hpp
	g++ -Wall -c -std=c++11 src/main.cpp src/Node.cpp src/Tree.cpp

Tree.o: src/Tree.cpp src/Node.cpp hpp/Tree.hpp
	g++ -Wall -c -std=c++11 src/Node.cpp src/Tree.cpp

Node.o: src/Node.cpp hpp/Node.hpp
	g++ -Wall -c -std=c++11 src/Node.cpp

clean:
	rm *.o && rm main.exe
