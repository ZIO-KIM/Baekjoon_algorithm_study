/* 20839
 * A, C, E 모두 충족 A
 * C, E 충족 C
 * E 충족 E
 * C, 1/2 >= A 충족 B
 * E, 1/2 >= C 충족 D
 */

#include <iostream>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    double A, C, E;
    cin >> A >> C >> E;
    double stuA, stuC, stuE;
    cin >> stuA >> stuC >> stuE;
    
    if (stuA >= A && stuC >= C && stuE >= E) {
        cout << "A\n";
        return 0;
    }
    if (stuA >= A/2 && stuC >= C && stuE >= E) {
        cout << "B\n";
        return 0;
    }
    if (stuC >= C && stuE >= E) {
        cout << "C\n";
        return 0;
    }
    if (stuC >= C/2 && stuE >= E) {
        cout << "D\n";
        return 0;
    }
    cout << "E\n";
    return 0;
    }
