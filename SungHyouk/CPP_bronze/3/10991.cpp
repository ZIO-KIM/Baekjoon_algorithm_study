/*
==============================================================================================
@ Title: 별 찍기 - 16
@ URL: https://www.acmicpc.net/problem/10991
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 6. 오전 11:51:16
@ Level: Bronze 3
@ Tags: implementation
@ Description:
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
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
    for (int i=0; i<n; i++) {
        for (int j=n-i-1; j>0; j--)
            cout << ' ';
        if (i >= 1) {
            for (int k=1; k <= i; k++)
                cout << "* ";
            cout << '*';
        }
        else
            cout << '*';
        cout << '\n';
    }
    
    return 0;
}
