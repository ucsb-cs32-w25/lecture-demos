#include <iostream> 
#include <thread> 
#include <vector> 

void helloWorldFunc(int id) { 
	std::cout << "Hello world! I am thread " << id << "\n";
} 

int main(int argc, char* argv[]) { 
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <n>\n";
        std::cerr << "where <n> is the number of threads\n";
        return 1;
    }
    std::cout << "[Main] Started main function!\n";

    int nthreads = std::stoi(argv[1]);  // get the number of threads from cmd line
    std::vector<std::thread> threads;  // vector to hold multiple threads

    /* Create all the threads */
    for (int i = 0; i < nthreads; i++) {
        threads.push_back(std::thread(helloWorldFunc, i));
    }

    /*
    important: never assume the order in which the threads will be executed.
    they maybe executed in any order that the OS wishes to execute them in.
    all the std::thread(...) call does is create the thread and make it "ready" to execute.
    */

    std::cout << "[Main] Created n threads\n"; 

    /* Join all the threads */
    for (auto& t : threads) {
        t.join();
    }

    std::cout << "[Main] all threads joined. Finishing program.\n"; 
	return 0; 
}