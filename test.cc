#include <iostream>

int main() {
    #if __cplusplus == 201103L
        std::cout << "C++11" << std::endl;
    #elif __cplusplus == 201402L
        std::cout << "C++14" << std::endl;
    #elif __cplusplus == 201703L
        std::cout << "C++17" << std::endl;
    #elif __cplusplus == 202002L
        std::cout << "C++20" << std::endl;
    #else
        std::cout << "Unknown C++ version" << std::endl;
    #endif
    return 0;
}

