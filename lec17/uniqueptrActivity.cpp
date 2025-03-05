#include <iostream>
#include <string>

class Resource
{
    public:
        Resource(int v): value(v) {}
        ~Resource() { std::cout << "destroyed\n"; }
        int value;
};

int main() {
    // Resource* res = new Resource(10);
    std::unique_ptr<Resource> res = std::make_unique<Resource>(10);
    
    if(res) {
        res->value = 25;
        std::cout << "resource value: " << res->value << "\n";
    }
    
    // delete res; -> this would've worked too, but we want automatic memory management
    return 0;
}
