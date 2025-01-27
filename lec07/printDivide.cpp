#include "ms.h"
#include<iostream>
#include<string>
#include<sstream>

int main() {
    std::cout << "Print divide steps for mergeSort..." << std::endl;
    int arr1[]{1, 3, 5, 2, 4};
    int n1 = sizeof(arr1) / sizeof(int);
    int left = 0, right = n1-1;
    std::cout << "arr={1, 3, 5, 2, 4}, left=" 
              << left <<", right=" << right << std::endl;
    mergeSort(arr1, left, right);

    return 0;
}