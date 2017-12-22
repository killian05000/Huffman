main.exe: main.o Noeud.o Arbre.o
	g++ -Wall -o main.exe main.o Noeud.o Arbre.o

main.o: main.cpp Noeud.cpp Arbre.cpp
	g++ -Wall -c -std=c++11 main.cpp Noeud.cpp Arbre.cpp

Arbre.o: Arbre.cpp Noeud.cpp
	g++ -Wall -c -std=c++11 Noeud.cpp Arbre.cpp

Noeud.o: Noeud.cpp
	g++ -Wall -c -std=c++11 Noeud.cpp

clean:
	rm *o
