main.exe: main.o Huffman.o Compression.o Node.o Tree.o
	g++ -Wall -o main.exe main.o Huffman.o Compression.o Node.o Tree.o

main.o: main.cpp Node.cpp Tree.cpp ../hpp/Fonction.hpp
	g++ -Wall -c -std=c++11 main.cpp Compression.cpp Huffman.cpp Node.cpp Tree.cpp

Compression.o: Compression.cpp Node.cpp Tree.cpp ../hpp/Fonction.hpp
	g++ -Wall -c -std=c++11 Compression.cpp Node.cpp Tree.cpp

Huffman.o: Huffman.cpp Tree.cpp Node.cpp ../hpp/Fonction.hpp
	g++ -Wall -c -std=c++11 Huffman.cpp Node.cpp Tree.cpp

Tree.o: Tree.cpp Node.cpp ../hpp/Tree.hpp
	g++ -Wall -c -std=c++11 Node.cpp Tree.cpp

Node.o: Node.cpp ../hpp/Node.hpp
	g++ -Wall -c -std=c++11 Node.cpp

clean:
	rm *.o && rm main.exe
