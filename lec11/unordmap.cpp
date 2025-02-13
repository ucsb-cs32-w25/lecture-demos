// you can skip this for exam review

// std::unordered_map uses dynamic resizing to maintain efficient O(1) performance.
// When load factor > max load factor, a resize and rehashing occurs.

// When the number of elements grows beyond a certain load factor, the table resizes (rehashing occurs).
// The table size approximately doubles when rehashing happens.

// The growth pattern is implementation-dependent
#include<map>
#include<string>
#include<iostream>
int main() {
    std::unordered_map<std::string, int> m;

    std::cout << "current no of elements: " << m.size() << std::endl;
    std::cout << "Number of buckets (size of the table): " << m.bucket_count() << std::endl;
    std::cout << "load factor: " << m.load_factor() << std::endl;

    m.insert({"abc", 1});

    std::cout << "size: " << m.size() << std::endl;
    std::cout << "Number of buckets: " << m.bucket_count() << std::endl;
    std::cout << "load factor: " << m.load_factor() << std::endl;

    m.insert({"def", 2});

    std::cout << "size: " << m.size() << std::endl;
    std::cout << "Number of buckets: " << m.bucket_count() << std::endl;
    std::cout << "load factor: " << m.load_factor() << std::endl;

    m.insert({"ghi", 2});

    std::cout << "size: " << m.size() << std::endl;
    std::cout << "Number of buckets: " << m.bucket_count() << std::endl;
    std::cout << "load factor: " << m.load_factor() << std::endl;

    m.insert({"jkl", 2});

    std::cout << "size: " << m.size() << std::endl;
    std::cout << "Number of buckets: " << m.bucket_count() << std::endl;
    std::cout << "load factor: " << m.load_factor() << std::endl;

    m.insert({"mno", 2});

    std::cout << "size: " << m.size() << std::endl;
    std::cout << "Number of buckets: " << m.bucket_count() << std::endl;
    std::cout << "load factor: " << m.load_factor() << std::endl;

    m.insert({"pqr", 2});

    std::cout << "size: " << m.size() << std::endl;
    std::cout << "Number of buckets: " << m.bucket_count() << std::endl;
    std::cout << "load factor: " << m.load_factor() << std::endl;

    return 0;
}