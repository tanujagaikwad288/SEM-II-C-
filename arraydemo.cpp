#include <iostream>
#include <vector>
#include <stdexcept> 
using namespace std;
int main() {
    std::vector<int> vec = {10, 20, 30};
    
    try {
        
        std::cout << vec.at(5) << std::endl; 
    } 
    catch (const std::out_of_range& e) {
        
        std::cerr << "Caught Error: " << e.what() << std::endl;
    }
    
    return 0;
}
