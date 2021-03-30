pipe: filecnt.o filedisp.o version.o
	g++ filecnt.o filedisp.o version.o -o pipe -lstdc++fs

filecnt.o: filecnt.cpp
	g++ -std=c++17 -c filecnt.cpp

filedisp.o: filedisp.cpp
	g++ -std=c++17 -c filedisp.cpp

version.o: version.cpp
	g++ -c version.cpp
clean:
	rm *.o pipe
