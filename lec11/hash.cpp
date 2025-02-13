#include <iostream>
#include <string>
#include <functional> // For std::hash

int main() {
    std::string input1 = "Hello, world!";
    
    // Create a hash function object for std::string
    std::hash<std::string> hash_fn1;

    // Generate the hash value
    size_t hash_value = hash_fn1(input1);

    int input2 = 200;
    std::hash<int> hash_fn2;

    float input3 = 200.0;
    std::hash<float> hash_fn3;

    // Output the hash value
    std::cout << "Hash value for \"" << input1 << "\": " << hash_value << std::endl;

    std::cout << "Hash value for " << input2 << ": " << hash_fn2(input2) << std::endl;
    
    std::cout << "Hash value for " << input3 << ": " << hash_fn3(input3) << std::endl;

    return 0;
}
