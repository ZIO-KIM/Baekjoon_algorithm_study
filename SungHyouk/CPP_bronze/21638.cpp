#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t1, v1, t2, v2;
    std::cin >> t1 >> v1 >> t2 >> v2;

    if (t2 < 0 && v2 >= 10) {
        std::cout << "A storm warning for tomorrow! Be careful and stay home if possible!\n";

        return 0;
    }
    if (t2 < t1) {
        std::cout << "MCHS warns! Low temperature is expected tomorrow.\n";

        return 0;
    }
    if (v1 < v2) {
        std::cout << "MCHS warns! Strong wind is expected tomorrow.\n";
        
        return 0;
    }
    std::cout << "No message\n";
    return 0;
    }
