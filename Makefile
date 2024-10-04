CC := g++
factorial_working := factorial_working
factorial_broken := factorial_broken
math_functions := mathFunctions
BIN_DIR := ./bin
SRC_DIR := ./src
TEST_DIR := ./tests
INCLUDE_DIR = include

all: main factorial_working

#runs the main program
main: main_cpp
	./bin/main

# builds the main program
main_cpp:
	g++ ./src/main.cpp -o ./bin/main


factorial: factorial_cpp
	./bin/factorial

factorial_cpp:
	echo "Making test_factorial binary"
	 $(CC) ./src/factorial.cpp -o ./bin/factorial

# runs the test harness for the working factorial function
test_factorial_working: factorial_working_cpp
	$(BIN_DIR)/$(factorial_working)_cpp	

# builds the test harness for the broken factorial function
factorial_working_cpp:
	$(CC) $(TEST_DIR)/$(factorial_working).cpp -o $(BIN_DIR)/$(factorial_working)_cpp	

# runs the test harness for the broken factorial function
test_factorial_broken: factorial_broken_cpp
	$(BIN_DIR)/$(factorial_broken)_cpp	

# builds the test harness for the broken factorial function
factorial_broken_cpp:
	$(CC) $(TEST_DIR)/$(factorial_broken).cpp -o $(BIN_DIR)/$(factorial_broken)_cpp	

clean:
	rm -f $(BIN_DIR)/* 

