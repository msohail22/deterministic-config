// export DB_NAME="my_database"
// export DB_USER="admin"
// export API_KEY

#include <iostream>
#include <cstdlib>

int main() {
    const char* dbName = std::getenv("DB_NAME");
    const char* dbUser = std::getenv("DB_USER");
    const char* apiKey = std::getenv("API_KEY");

    if (dbName and dbUser and apiKey) {
        std::cout << "Database Name: " << dbName << std::endl;
        std::cout << "Database User: " << dbUser << std::endl;
        std::cout << "API Key: " << apiKey << std::endl;
    } else {
        std::cerr << "One or more environment variables are not set." << std::endl;
    }
    return 0;
}