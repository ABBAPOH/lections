CC=clang++ # compiler
CFLAGS=-c -Wall -std=c++11 # compiler flags
LDFLAGS= # linker flags

all: complex

complex: main.o class.o
	$(CC) ${LDFLAGS} main.o class.o -o complex

main.o: src/main.cpp
	$(CC) $(CFLAGS) src/main.cpp

class.o: src/class.cpp
	$(CC) $(CFLAGS) src/class.cpp

clean:
	rm -rf *.o complex

love:
	echo "not war"
