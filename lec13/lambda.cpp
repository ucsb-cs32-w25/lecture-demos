#include<vector>
#include<iostream>
#include<cctype>  // for tolower
#include <algorithm>  // for std::transform

typedef bool (*CompareFn)(const std::string&, const std::string&);

void sort(std::vector<std::string>& a, CompareFn compare) {
    int n = a.size();
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(compare(a[j], a[j+1])) {
                std::swap(a[j], a[j+1]);
            }
        }
    }
}

int main() {
    std::vector<std::string> vec = {"Banana", "apple", "Cherry", "banana", "Apple", "cherry"};
    /*
    final result should be:
        apple
        Apple
        Banana
        banana
        Cherry
        cherry
    */ 

    // TODO step 1: convert the compareAsc function to a lambda
    // step 1a: fix the lambda's type
    auto compareAscNoCaseLambda = [](const std::string& a, const std::string& b) -> bool {
        // step 1b: do what compareAsc does
        std::string aLower = a;
        std::string bLower = b;

        // step 2: convert each of the strings to lower case using std::transform and tolower
        std::transform(a.begin(), a.end(), aLower.begin(), tolower);
        std::transform(b.begin(), b.end(), bLower.begin(), tolower);

        // step 3: compare converted lowercase strings
        return aLower > bLower;
    };  

    sort(vec, compareAscNoCaseLambda);

    for(std::string str : vec) {
        std::cout<< str <<"\n";
    }
}