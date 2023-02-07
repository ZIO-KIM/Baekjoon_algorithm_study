/*
==============================================================================================
@ Title: 사분면
@ URL: https://www.acmicpc.net/problem/9610
@ Author: shc
@ Created Date: 2023. 2. 7. 오후 10:17:46
@ Level: Bronze 3
@ Tags: implementation math
@ Description:
2차원 좌표 상의 여러 점의 좌표 (x,y)가 주어졌을 때, 각 사분면과 축에 점이 몇 개 있는지 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 점의 개수 n (1 ≤ n ≤ 1000)이 주어진다. 다음 n개 줄에는 점의 좌표 (xi, yi)가 주어진다. (-106 ≤
xi, yi ≤ 106)
@ Output: 각 사분면과 축에 점이 몇 개 있는지를 예제 출력과 같은 형식으로 출력한다.
==============================================================================================
*/

#include <iostream>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int line;
    cin >> line;
    int x, y;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
    for (int i=0; i<line; i++) {
        cin >> x >> y;
        if (x > 0 and y > 0) q1 += 1;
        else if (x < 0 and y > 0) q2 += 1;
        else if (x < 0 and y < 0) q3 += 1;
        else if (x > 0 and y < 0) q4 += 1;
        else axis += 1;
    }
    cout << "Q1: " << q1 << '\n';
    cout << "Q2: " << q2 << '\n';
    cout << "Q3: " << q3 << '\n';
    cout << "Q4: " << q4 << '\n';
    cout << "AXIS: " << axis << '\n';

    return 0;
}
