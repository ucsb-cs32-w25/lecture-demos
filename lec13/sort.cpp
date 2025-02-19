#include<vector>
#include<iostream>

// TODO objective 2: add a typedef for your function pointer here
typedef bool (*CompareFn)(const std::string&, const std::string&);

// TODO objective 1: fix sort() function to take a function pointer as a parameter
void sort(std::vector<std::string>& a, CompareFn compareFn) {
    int n = a.size();
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(compareFn(a[j], a[j+1])) {
                std::swap(a[j], a[j+1]);
            }
        }
    }
}

bool compareAsc(const std::string& a, const std::string& b) {
    return a > b;
}

bool compareSize(const std::string& a, const std::string& b) {
    return a.size() > b.size();
}

int main() {
    std::vector<std::string> vec;
    vec.push_back("abcd");
    vec.push_back("def");
    vec.push_back("gh");
    vec.push_back("c");

    sort(vec, compareSize);

    for(std::string str : vec) {
        std::cout<< str <<"\n";
    }
}