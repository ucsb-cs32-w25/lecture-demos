# simple Makefile

# declaring a variable
CXX=g++
CPPFLAGS=--std=c++17

# rule format
# target : prerequisites …
#        recipe
#        …
#        …

iterators: iterators.cpp
	${CXX} ${CPPFLAGS} -o iterators $^

# $^ is an automatic variable: list of all the prerequisites of the rule

clean:
	rm -f *.o iterators