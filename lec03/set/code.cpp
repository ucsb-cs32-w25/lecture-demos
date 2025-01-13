#include<iostream>
#include<set>
int main() {
    std::set<int> s;

    s.insert(5);
    s.insert(10);
    s.insert(5);
    s.insert(1);

    s.erase(10);

    std::cout <<"size = "<< s.size()<<"\n";

    // this is the best way to just view the elements without doing expensive copying
    std::cout<< "elements in set:\n";
    for(const int& elem : s) {
        std::cout << elem << " ";
    }
    std::cout<<"\n";

    // using the iterator to view elements 
    std::set<int>::const_iterator iter;
    for (iter = s.cbegin(); iter != s.cend(); iter++) {
        std::cout<< *iter << " ";
    }
    std::cout<<"\n";

    // s.find(elem) -> Returns an iterator located at the elem in the set 
    // If elem is not in the set, s.end() is returned.
    if (s.find(1) != s.end()) {
        std::cout<<"found";
    } else {
        std::cout<<"not found";
    }



    return 0;
}