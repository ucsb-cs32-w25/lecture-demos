#include<vector>
#include<iostream>
int main() {
        // part 1: create an empty vector, accessing elements, and  operations

    // create an empty vector
    std::vector<int> v1;

    // adding an element
    v1.push_back(5);
    v1.push_back(10);

    // accessing elements
    
    // accessing an individual element
    std::cout<<v1[0]<<std::endl;

    // use at() function to access element    
    std::cout<<v1.at(1)<<std::endl;

    // accessing an "out of bounds" element
    std::cout<<v1[2]<<std::endl;
    // std::cout<<v1.at(2)<<std::endl;  // this will throw an exception!

    // ****************************************************************************************
    // part 2a: vector initializations

    // direct initialization: create a vector of 50 elements 
    std::vector<int> v2(50);

    // direct initialization: create a vector of 50 elements, all elements initialized to -1
    std::vector<int> v3(50, -1);

    // list initialization: create a vector with 3 elements: 1,2,3
    std::vector<int> v4{1,2,3};

    std::cout<<v2[0]<<std::endl; 
    std::cout<<v3[0]<<std::endl;
    std::cout<<v4[0]<<std::endl;

    // part 2b: iterating over a vector
    std::vector<int> v5{1,2,3};

    // this is the best way to just view the elements without doing expensive copying
    std::cout<< "elements in vector:\n";
    for(const int& elem : v5) {
        std::cout << elem << "\n";
    }

    // ****************************************************************************************
    // part 3: storage
    std::vector<int> v6(50);
    
    // storage is contiguous 
    std::cout<< sizeof(int) << "\n";
    std::cout<< &(v6[0]) << "\n";
    std::cout<< &(v6[1]) << "\n";
    std::cout<< &(v6[2]) << "\n";

    std::cout<< v6.size() << "\n";
    std::cout<< sizeof(v6) << "\n"; // why 24???

    return 0;
}