CFLAGS = -Wall -g -std=c++11 
CC = g++

all: counter.o 
		$(CC) $(CFLAGS) -o count counter.o


counter.o: counter.cc 
		$(CC) -c $(CFLAGS) counter.cc

doc: 
	doxygen ./count

check:
	valgrind cppcheck counter.cc
# list any file you want deleted with the command 
# make clean
clean:
	rm –f counter.o count