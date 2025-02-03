# Makefile - Inheritance Demos

CXX=g++
#CXX=clang++

CPPFLAGS=--std=c++17

DEPENDENCIES=person.o student.o main.cpp

main: ${DEPENDENCIES}
	${CXX} ${CPPFLAGS} -o main ${DEPENDENCIES}

clean:
	/bin/rm -f main *.o

