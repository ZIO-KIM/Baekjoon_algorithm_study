/*
==============================================================================================
@ Title: 별 찍기 - 2
@ URL: https://www.acmicpc.net/problem/2439
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 7. 오후 1:53:24
@ Level: Bronze 4
@ Tags: implementation
@ Description:
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제 하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을
출력하시오.
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
        // space
        for (int j=n-1; j>=i; j--) {
            cout << " ";
        }
        // print *
        for (int k=1; k<=i; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
