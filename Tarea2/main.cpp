#include <iostream>
#include "SaludoFactory.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    SaludoFactory s;
    s.crearSaludo(0);
    return 0;
}