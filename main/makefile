CXX = g++
CXXFLAGS = -std=c++17 -Wall

main: main.o data.o calc.o
	$(CXX) $(CXXFLAGS) -o main main.o data.o calc.o

main.o: main.cc data.h calc.h
	$(CXX) $(CXXFLAGS) -c main.cc

data.o: data.cc data.h
	$(CXX) $(CXXFLAGS) -c data.cc

calc.o: calc.cc calc.h data.h
	$(CXX) $(CXXFLAGS) -c calc.cc


clean:
	rm -f *.o main