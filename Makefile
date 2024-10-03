CC := g++
factorial_working = factorial_working
BIN_DIR := .\bin
SRC_DIR := .\src


all: main factorial

main: main.exe
	.\bin\main.exe

main.exe:
	g++ .\src\main.cpp -o .\bin\main.exe

factorial:
	echo "Makeing test_factorial.exe"
	 .\bin\test_factorial.exe

factorial.exe:
	 $(CC) .\src\test_factorial.cpp -o .\bin\test_factorial.exe

factorial_working: factorial_working.exe
	$(BIN_DIR)\$(factorial_working).exe	

factorial_working.exe:
	$(CC) $(SRC_DIR)\$(factorial_working).cpp -o $(BIN_DIR)\$(factorial_working).exe	


clean:
	rm .\bin\main.exe
	rm .\bin\test_factorial.exe