#include<iostream>
#include<vector>
int main() {
    // size() returns the number of elements 
    // capacity() returns number of elements 
    //      that can be held in currently allocated storage 
    std::vector<int> v;
    std::cout<<"size="<<v.size()<<"\n";
    std::cout<<"cap="<<v.capacity()<<"\n";

    // at this point size = 0, capacity = 0

    for(int i=0; i<9; i++) {
        v.push_back(1);  
        // whenever size > capacity, the vector expands by doubling its capacity
        std::cout<<"size="<<v.size()<<"\n";
        std::cout<<"cap="<<v.capacity()<<"\n";
    }

    // at this point, we have size = 9, capacity = 16

    v.shrink_to_fit();  
    // as the name suggests, this reduces the capacity to just fit the 9 elements

    std::cout<<"size="<<v.size()<<"\n";
    std::cout<<"cap="<<v.capacity()<<"\n";

    // size = 9, capacity = 9

    return 0;

}