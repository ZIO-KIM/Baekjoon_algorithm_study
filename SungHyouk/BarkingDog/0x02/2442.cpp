/*
==============================================================================================
@ Title: 별 찍기 - 5
@ URL: https://www.acmicpc.net/problem/2442
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 10. 오후 12:38:20
@ Level: Bronze 3
@ Tags: implementation
@ Description:
첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제 별은 가운데를 기준으로 대칭이어야
한다.
@ Input: 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
@ Output: 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
==============================================================================================
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i=1; i<=n; i++) {
        for (int j=n-1; j>=i; j--) {
            cout << ' ';
        }
        for (int k=1; k<=2*i-1; k++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
