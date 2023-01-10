/*
==============================================================================================
@ Title: 별 찍기 - 8
@ URL: https://www.acmicpc.net/problem/2445
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 10. 오후 5:36:23
@ Level: Bronze 3
@ Tags: implementation
@ Description:
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
@ Input: 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
@ Output: 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
==============================================================================================
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << '*';
        }
        for (int k=0; k<2*(n-i); k++) {
            cout << ' ';
        }
        for (int l=0; l<i; l++) {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            cout << '*';
        }
        for (int k=0; k<2*i; k++) {
            cout << ' ';
        }
        for (int l=0; l<n-i; l++) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
