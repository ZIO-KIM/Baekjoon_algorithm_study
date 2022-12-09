#include <iostream>
using namespace std;


int main()
{
    // 캥거루 세 마리의 좌표를 받는다.
    int A, B, C;
    cin >> A >> B >> C;
    // 바깥쪽에서 사이로 점프, 최대 점프할 수 있는 횟수를 구하기
    // A가 점프: B와 C 간격만큼 점프 가능
    // C가 점프: A와 B 간격만큼 점프 가능
    int diffBC = abs(C - B);
    int diffAB = abs(B - A);

    cout << max(diffBC, diffAB) - 1 << endl;

    return 0;
}