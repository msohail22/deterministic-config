#include <iostream>
#include <cstdlib>

int main(){

    // first create a file, file.sh and add export YO=yo and export NO=no
    const char* value1 = std::getenv("YO");
    const char* value2 = std::getenv("NO");

    if (value1 and value2) std::cout << value1 << " " << value2 << "\n";
    else std::cout << "both values are not correctly defined\n";
    return 0;
}