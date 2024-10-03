CC := g++
factorial_working = factorial_working
BIN_DIR := ./bin
SRC_DIR := ./src

all: main factorial

main: main_cpp
	./bin/main

main_cpp:
	g++ ./src/main.cpp -o ./bin/main

factorial:
	echo "Making test_factorial binary"
	 ./bin/test_factorial_cpp

factorial_cpp:
	 $(CC) ./src/test_factorial.cpp -o ./bin/test_factorial_cpp

factorial_working: factorial_working_cpp
	$(BIN_DIR)/$(factorial_working)_cpp	

factorial_working_cpp:
	$(CC) $(SRC_DIR)/$(factorial_working).cpp -o $(BIN_DIR)/$(factorial_working)_cpp	

clean:
	rm -f $(BIN_DIR)/*

