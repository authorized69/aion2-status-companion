#include <iostream>
#include <fstream>
int main() {
    std::ifstream file("config.json");
    if (file.is_open()) std::cout << "Config loaded" << std::endl;
    return 0;
}
