CC := g++

factorial:
	echo "Makeing test_factorial.exe"
	 .\bin\test_factorial.exe

factorial.exe:
	 $(CC) .\src\test_factorial.cpp -o .\bin\test_factorial.exe

