# simple Makefile

# declaring a variable
CXX=g++
CPPFLAGS=--std=c++17

# rule format
# target : prerequisites …
#        recipe
#        …
#        …

vector: vector.cpp
	${CXX} ${CPPFLAGS} -o vector $^

vectorCap: vectorCap.cpp
	${CXX} ${CPPFLAGS} -o vectorCap $^	

# $^ is an automatic variable: list of all the prerequisites of the rule

clean:
	rm -f *.o vector vectorCap