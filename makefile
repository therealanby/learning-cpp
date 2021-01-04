vid73: vid73.o vid73_func.o
	g++ vid73.o vid73_func.o -o vid73

vid73.o: vid73.cpp
	g++ -c vid73.cpp

vid73_func.o: vid73_func.cpp
	g++ -c vid73_func.cpp

clean:
	rm *.o math