all: myk

myk:
	g++ -c main.cpp -std=c++11 -o main.o
	g++ -c ArrayList.cpp -std=c++11 -o ArrayList.o
	g++ -c Collection.cpp -std=c++11 -o Collection.o
	g++ -c HashSet.cpp -std=c++11 -o HashSet.o
	g++ -c Iterator.cpp -std=c++11 -o Iterator.o
	g++ -c List.cpp -std=c++11 -o List.o
	g++ -c Queue.cpp -std=c++11 -o Queue.o
	g++ -c Set.cpp -std=c++11 -o Set.o
	g++ main.o ArrayList.o Collection.o HashSet.o Iterator.o List.o Queue.o Set.o -o exe
	./exe
clean:
	rm *.o