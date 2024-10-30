MaxConsecutiveOnes: MaxConsecutiveOnes.o
	g++ -g -o MaxConsecutiveOnes.exe MaxConsecutiveOnes.o -pthread    

MaxConsecutiveOnes.o: MaxConsecutiveOnes/MaxConsecutiveOnes.cpp
	g++ -g  -c -pthread MaxConsecutiveOnes/MaxConsecutiveOnes.cpp
