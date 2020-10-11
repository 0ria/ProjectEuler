# All the targets
all: queue

# Dependencies and rule to make queue
queue: main.o
    g++ -o queue main.o

# Dependencies and rule to make main.o
main.o: main.cpp queue.h
    g++ -c main.cpp

clean:
    rm queue main.o