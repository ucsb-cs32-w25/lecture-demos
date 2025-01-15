// some code borrowed from Prof. Ziad Matni
#include <iostream>

class Test {
    public:
       short a;
       int b;
       int c;
       double d;
       
};

class X {
    public:
       int a;      // 4 bytes
       short b;    // 2
       char c;     // 1
       char d;     // 1
                   //
                   // --4-- || --2-- | --1-- | --1--|
                   // No padding - all naturally aligned
                   // total size = 8 bytes
};

class Y {
    public:
       char a;     // 1 byte
       int b;      // 4
       char c;     // 1
       short d;    // 2
                   //
                   // --1--| --3empty-- ||--4--||--1--|--1empty--|--2--||
                   // padding in 2 places after char a and char c
                   // total size = 12 bytes
};

class Z {
    public:
       char a;     // 1 byte
       double b;   // 8
       short c;    // 2
       int d;      // 4
                   //
                   // --1--| --7empty-- ||--8--||--2--|--2empty--||--4--||
                   // padding in 2 places after char a and char c
                   // total size = 24 bytes
};


int main() {
    std::cout << "Size of int = " << sizeof(int) << " Bytes\n";
    std::cout << "Size of short = " << sizeof(short) << " Bytes\n";
    std::cout << "Size of double = " << sizeof(double) << " Bytes\n";

    // EXAMPLE: Class Test
    Test test;
    std::cout << "\nSize of the object of class Test is = " << sizeof(test) << " Bytes\n";
    
    // Addresses
    std::cout << "&test = " << &test << std::endl;  
    std::cout << "&test.a (short) = " << reinterpret_cast<void*>(&test.a) << std::endl;  
    std::cout << "&test.b (int) = " << reinterpret_cast<void*>(&test.b) << std::endl;  
    std::cout << "&test.c (int) = " << reinterpret_cast<void*>(&test.c) << std::endl;  
    std::cout << "&test.d (double) = " << reinterpret_cast<void*>(&test.d) << std::endl;  

    // EXAMPLE: Class X
    X x;
    std::cout << "\nSize of the object of class X is = " << sizeof(x) << " Bytes\n";
    std::cout << "&x = " << &x << std::endl;  
    std::cout << "&x.a = " << &x.a << std::endl;  
    std::cout << "&x.b = " << &x.b << std::endl;   
    std::cout << "&x.c = " << reinterpret_cast<void*>(&x.c) << std::endl; 
    std::cout << "&x.d = " << reinterpret_cast<void*>(&x.d) << std::endl; 

    // EXAMPLE: Class Y
    Y y;
    std::cout << "\nSize of the object of class Y is = " << sizeof(y) << " Bytes\n";
    std::cout << "&y = " << &y << std::endl;   
    std::cout << "&y.a = " << reinterpret_cast<void*>(&y.a) << std::endl;
    std::cout << "&y.b = " << &y.b << std::endl; 
    std::cout << "&y.c = " << reinterpret_cast<void*>(&y.c) << std::endl;
    std::cout << "&y.d = " << &y.d << std::endl; 

    // EXAMPLE: Class Z
    Z z;
    std::cout << "\nSize of the object of class Z is = " << sizeof(z) << " Bytes\n";
    std::cout << "&z = " << &z << std::endl; 
    std::cout << "&z.a = " << reinterpret_cast<void*>(&z.a) << std::endl;
    std::cout << "&z.b = " << &z.b << std::endl; 
    std::cout << "&z.c = " << reinterpret_cast<void*>(&z.c) << std::endl; 
    std::cout << "&z.d = " << &z.d << std::endl;

    return 0;
}
