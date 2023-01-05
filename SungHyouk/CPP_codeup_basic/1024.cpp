#include <iostream>

int main() {
    char d[30];
    std::cin >> d;
    for (int i=0; d[i] != '\0'; i++) {
        std::cout << "'" << d[i] << "'\n";
    }
    return 0;
}