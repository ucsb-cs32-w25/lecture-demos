// create the executable file with this command:
// g++ --std=c++17 -lpthread -O2 -o smThreaded smThreaded.cpp
// the O2 flag sets the compiler optimization level to 2
#include <iostream>
#include <vector>
#include <thread>
#include <cstdlib>  // For std::stoi
#include <chrono>   // For measuring execution time

void scalarMultiplySequential(std::vector<int>& arr, int scalar) {
    for (int i = 0; i < arr.size(); i++) {
        arr[i] *= scalar;
    }
}

void scalarMultiply(std::vector<int>& arr, int scalar, int threadId, int nthreads) {
    int n = arr.size();
    int chunkSize = n / nthreads;
    int start = threadId * chunkSize;
    int end = (threadId == nthreads - 1) ? n : start + chunkSize;

    for (int i = start; i < end; i++) {
        arr[i] *= scalar;
    }
}

// Function to print only the first and last 10 elements for verification
void printVector(const std::vector<int>& arr) {
    int n = arr.size();
    std::cout << "First 10 elements: ";
    for (int i = 0; i < std::min(10, n); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nLast 10 elements: ";
    for (int i = std::max(0, n - 10); i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <array_size> <number_of_threads>\n";
        return 1;
    }

    int nthreads = std::stoi(argv[2]);
    if (nthreads < 1) {
        std::cerr << "Error: Number of threads must be at least 1\n";
        return 1;
    }

    const int SIZE = std::stoi(argv[1]);
    std::vector<int> arr(SIZE, 1); // Initialize all elements to 1
    int scalar = 3;

    std::cout << "Original array (first and last 10 elements):\n";
    printVector(arr);

    auto startTime1 = std::chrono::high_resolution_clock::now();
    scalarMultiplySequential(arr, scalar);

    auto endTime1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = endTime1 - startTime1;

    std::cout << "After scalar mult (sequential). first and last 10 elements):\n";
    printVector(arr);

    std::cout << "Execution time (seq): " << elapsed1.count() << " seconds\n";

    // reset the array to all 1
    arr.assign(arr.size(), 1);
    
    auto startTime2 = std::chrono::high_resolution_clock::now();

    std::vector<std::thread> threads;
    for (int i = 0; i < nthreads; i++) {
        // note: std::ref is used when passing by reference to an std::thread
        threads.push_back(std::thread(scalarMultiply, std::ref(arr), scalar, i, nthreads));
    }

    for (auto& t : threads) {
        t.join();
    }

    auto endTime2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed2 = endTime2 - startTime2;

    std::cout << "After scalar mult (parallel). first and last 10 elements:\n";
    printVector(arr);
    
    std::cout << "Execution time (parallel): " << elapsed2.count() << " seconds\n";

    return 0;
}
