all: writer.o reader.o
	g++ -o writer writer.o
	g++ -o reader reader.o
reader.o: reader.cpp
	g++ -c reader.cpp
writer.o: writer.cpp
	g++ -c writer.cpp
clean:
	rm *.o