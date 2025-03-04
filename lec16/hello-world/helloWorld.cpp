#include <iostream> 
#include <thread> 

void helloWorldFunc(int id) { 
	std::cout << "Hello world! I am thread " << id << "\n";
} 

int main() { 
    /*
    at this point, there's only a single thread in execution: 
    the thread which runs main()
    */ 
    std::cout << "[Main] Started main function!\n";
    
    std::thread t(helloWorldFunc, 1);    
    /*
    the above call creates a new thread which is now ready to execute.
    it's upto the OS to decide which thread to give the CPU to: main or t, (or
    some other thread on your machine)
    */ 
    std::cout << "[Main] Created thread t\n"; 

    /*
    the t.join() call makes the calling thread (in this case, main) to sleep 
    until thread t finishes
    */ 
    t.join();
    /*
    NOTE: If .join() or .detach() is not called, then the program will 
    hit a runtime error (memory core dump)
    */ 

    /*
    at this point, the thread t has finished execution, and the OS wakes up the main
    thread and it continues execution
    */ 
    std::cout << "[Main] thread t joined. Finishing program.\n"; 

	return 0; 
}