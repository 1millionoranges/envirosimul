// Your First C++ Program

#include <iostream>
#include "organism.h"

int main() {
    std::cout << "Hello World!";
    organism org;
    org.setpos(4, 1);
    std::cout << org.getxpos();
    return 1;
}
