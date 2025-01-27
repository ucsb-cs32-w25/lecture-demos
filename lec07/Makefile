CXX=g++
CPPFLAGS=--std=c++17

dividePrint: printDivide
	./printDivide

mergeTest: testMerge
	./testMerge

qsTest: testQS
	./testQS

partitionTest: testPartition
	./testPartition

printDivide: printDivide.o tddFuncs.o ms.o
	${CXX} ${CPPFLAGS} -o printDivide printDivide.o tddFuncs.o ms.o

testMerge: testMerge.o tddFuncs.o ms.o
	${CXX} ${CPPFLAGS} -o testMerge testMerge.o tddFuncs.o ms.o

testQS: testQS.o tddFuncs.o qs.o
	${CXX} ${CPPFLAGS} -o testQS testQS.o tddFuncs.o qs.o

testPartition: testPartition.o tddFuncs.o qs.o
	${CXX} ${CPPFLAGS} -o testPartition testPartition.o tddFuncs.o qs.o

clean:
	/bin/rm -f printDivide testPartition testQS testMerge *.o
