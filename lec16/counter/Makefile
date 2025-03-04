CXX=g++
CPPFLAGS=--std=c++17 -lpthread

counter: counter.cpp
	${CXX} ${CPPFLAGS} -o counter counter.cpp

counterSync: counterSync.cpp
	${CXX} ${CPPFLAGS} -o counterSync counterSync.cpp

clean: 
	rm -f *.o counter counterSync