CXX = g++
CXXFLAGS = -std=c++17 -Wall

main: main.o data.o cmd.o
	$(CXX) $(CXXFLAGS) -o main main.o data.o cmd.o

main.o: main.cc data.h cmd.h
	$(CXX) $(CXXFLAGS) -c main.cc

data.o: data.cc data.h
	$(CXX) $(CXXFLAGS) -c data.cc

cmd.o: cmd.cc cmd.h data.h
	$(CXX) $(CXXFLAGS) -c cmd.cc


clean:
	rm -f *.o main