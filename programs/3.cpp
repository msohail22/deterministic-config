#include <iostream>
#include <cstdlib>

int main() {

    // to set the environment variable, what we do is we 
    // export variable_name=variable_value
    const char* envValue = std::getenv("MODE");
    
    if (envValue) std::cout << envValue << "\n";
    else std::cout << "Arey env bhi set nahi kar sakta\n";
}