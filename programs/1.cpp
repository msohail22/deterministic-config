#include <iostream>

int main() {
    const char variable1[20] = "value";
    const char variable2[20] = "another_value";
    for (int i = 0; i < 20; i++) {
        std::cout << variable1[i];
        
    }
    std::cout << "\n";
    for (int i = 0; i < 20; i++) {
        
        std::cout << variable2[i];
    }
    std::cout << "\n";
    
    return 0;
}