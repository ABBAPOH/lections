CC=clang # compiler
CFLAGS=-Wall # compiler flags
LDFLAGS= # linker flags

all: app

app: main.o func.o
	$(CC) ${LDFLAGS} main.o func.o -o app

main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c

func.o: src/func.c
	$(CC) $(CFLAGS) -c src/func.c

clean:
	rm -rf *.o app

love:
	echo "not war"
