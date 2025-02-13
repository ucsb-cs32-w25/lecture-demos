#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>
#include <cstdlib>

const int DATA_SIZE = 100; // 1 million elements

int main() {
    std::map<int, int> orderedMap;  // balanced tree structure (red-black tree)
    std::unordered_map<int, int> unorderedMap;

    // Generate random keys
    int* keys = new int[DATA_SIZE];
    for (int i = 0; i < DATA_SIZE; ++i) {
        keys[i] = rand(); // Generate random keys
    }

    // Measure insertion time for std::map
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < DATA_SIZE; ++i) {
        orderedMap[keys[i]] = i;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> mapInsertionTime = end - start;
    std::cout << "std::map total insertion time: " << mapInsertionTime.count() << " seconds\n";
    // std::cout << "std::map average insertion time: " << (mapInsertionTime.count() / DATA_SIZE) * 1e6 << " microseconds per insertion\n";

    // Measure insertion time for std::unordered_map
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < DATA_SIZE; ++i) {
        unorderedMap[keys[i]] = i;
    }
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> unorderedMapInsertionTime = end - start;
    std::cout << "std::unordered_map total insertion time: " << unorderedMapInsertionTime.count() << " seconds\n";
    // std::cout << "std::unordered_map average insertion time: " << (unorderedMapInsertionTime.count() / DATA_SIZE) * 1e6 << " microseconds per insertion\n";

    // Measure lookup time for std::map
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < DATA_SIZE; ++i) {
        /*
        setting this to volatile makes the compiler not perform any optimization.
        if we don't set this to volatile, the compiler might think it's an unused variable
        and then completely ignore the call, making the benchmark pointless.
        */ 
        volatile int val = orderedMap[keys[i]];
    }
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> mapLookupTime = end - start;
    std::cout << "std::map total lookup time: " << mapLookupTime.count() << " seconds\n";
    // std::cout << "std::map average lookup time: " << (mapLookupTime.count() / DATA_SIZE) * 1e6 << " microseconds per lookup\n";

    // Measure lookup time for std::unordered_map
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < DATA_SIZE; ++i) {
        volatile int val = unorderedMap[keys[i]];
    }
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> unorderedMapLookupTime = end - start;
    std::cout << "std::unordered_map total lookup time: " << unorderedMapLookupTime.count() << " seconds\n";
    // std::cout << "std::unordered_map average lookup time: " << (unorderedMapLookupTime.count() / DATA_SIZE) * 1e6 << " microseconds per lookup\n";

    delete[] keys; // Clean up dynamically allocated array
    return 0;
}
