/*
==============================================================================================
@ Title: 별 찍기 - 13
@ URL: https://www.acmicpc.net/problem/2523
@ Author: shc
@ Created Date: 2023. 1. 28. 오전 9:41:05
@ Level: Bronze 3
@ Tags: implementation
@ Description:
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
@ Input: 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
@ Output: 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int number;
    cin >> number;
    for (int i=1; i<=number; ++i) {
        for (int j=1; j<=i; ++j) {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i=number+1; i<=2*number-1; i++) {
        for (int j=2*number-i; j>=1; j--) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
