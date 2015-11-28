SFML_LIB=-L./SFML-2.3.1/lib -lsfml-graphics -lsfml-window -lsfml-system
SFML_INCLUDE=-I./SFML-2.3.1/include
DEBUG=-g
CPP11=-std=c++11

all: robo

robo: main.o grid.o graphicInterface.o ParserCSV.o searchs.o node.o items.o
	g++ main.o graphicInterface.o grid.o ParserCSV.o searchs.o node.o items.o -o robo -pthread $(SFML_LIB) $(SFML_INCLUDE)

main.o: main.cpp
	g++ $(CPP11) $(DEBUG) -c -Wall main.cpp $(SFML_INCLUDE)
	
searchs.o: searchs.cpp
	g++ $(CPP11) $(DEBUG) -c searchs.cpp
	
node.o: node.cpp
	g++ $(CPP11) $(DEBUG) -c node.cpp

items.o: items.cpp
	g++ $(CPP11) $(DEBUG) -c items.cpp

grid.o: grid.cpp
	g++ $(CPP11) $(DEBUG) -c grid.cpp

graphicInterface.o: graphicInterface.cpp 
	g++ $(CPP11) $(DEBUG) -c graphicInterface.cpp 

ParserCSV.o: ParserCSV.cpp
	g++ $(CPP11) $(DEBUG) -c -Wall ParserCSV.cpp
	

clean:
	rm -rf *.gch *o robo *~; clear;
