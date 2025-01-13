# simple Makefile

# declaring a variable
CXX=g++

# rule format
# target : prerequisites …
#        recipe
#        …
#        …

code: code.cpp
	${CXX} -o code -std=c++17 $^

# $^ is an automatic variable: list of all the prerequisites of the rule

clean:
	rm -f *.o code


