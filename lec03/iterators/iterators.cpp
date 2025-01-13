#include<vector>
#include<iostream>
#include<algorithm>
// using namespace std;
int main(){
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::vector<int>::iterator iter  = v.begin();
    *iter = 10;  // can update values

    iter++;  // iterate to next element
    *iter = 20;

    std::vector<int>::iterator iter2  = v.end();
    *iter2 = 50;  // this doesn't update anything, since v.end() points to just past the last element

    // iterating through the elements
    for(auto iter  = v.begin(); iter != v.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << "\n";

    // reverse iterator
    for(auto iter  = v.rbegin(); iter != v.rend(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << "\n";

    // standard algorithms in STL are based on iterators
    std::sort(v.begin() + 1, v.end());  // sort elements from indices 1 onwards

    return 0;
}