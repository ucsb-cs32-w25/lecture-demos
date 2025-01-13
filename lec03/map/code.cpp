#include<map>
#include<iostream>
#include<string>
#include<utility> // for std::pair
int main() {
    std::map<std::string, int> m;

    m["Will"] = 5221;

    std::pair<std::string, int> p1("Angela", 7336);
    m.insert(p1);

    m.erase("Will");

    std::cout <<"size = "<< m.size()<<"\n";

    for(const std::pair<std::string, int>& pair: m) {
        std::cout<<pair.first<<"->";
        std::cout<<pair.second<<"\n";
    }

    std::map<std::string,int>::const_iterator iter;
    for (iter = m.cbegin(); iter != m.cend(); iter++) {
        std::cout<< iter->first << "->";
        std::cout<< iter->second << "\n";
    }

    if (m.find("Will") != m.end()) {
        std::cout<<"found";
    } else {
        std::cout<<"not found";
    }
    
    return 0;
}

