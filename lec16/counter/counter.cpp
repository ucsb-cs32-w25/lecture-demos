#include <iostream>
#include <thread>
#include <cstdlib>

volatile int counter = 0;
int loops;

void worker() {
    for (int i = 0; i < loops; i++) {
        counter++;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "usage: threads <loops>\n";
        return 1;
    }

    loops = std::atoi(argv[1]);  
    std::cout << "Initial value : " << counter << std::endl;

    std::thread t1(worker);
    std::thread t2(worker);

    t1.join();
    t2.join();

    std::cout << "Final value   : " << counter << std::endl;

    return 0;
}
