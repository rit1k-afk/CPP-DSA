#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(std::time(0));

    // Generate random number
    int randomNumber = std::rand();

    // Output the random number
    std::cout << "Random Number: " << randomNumber << std::endl;

    return 0;
}