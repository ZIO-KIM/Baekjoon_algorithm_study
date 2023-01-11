/*
==============================================================================================
@ Title: 숫자
@ URL: https://www.acmicpc.net/problem/10093
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 11. 오후 1:54:07
@ Level: Bronze 2
@ Tags: implementation
@ Description:
두 양의 정수가 주어졌을 때, 두 수 사이에 있는 정수를 모두 출력하는 프로그램을 작성하시오.
@ Input: 두 정수 A와 B가 주어진다.
@ Output: 첫째 줄에 두 수 사이에 있는 수의 개수를 출력한다. 둘째 줄에는 두 수 사이에 있는 수를 오름차순으로 출력한다.
==============================================================================================
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long a, b;
    cin >> a >> b;
    if (b > a) {
        cout << b-a-1 << '\n';
        for (unsigned long long i=a+1; i<b; i++) {
            cout << i << ' ';
        }
    }
    else if (a > b) {
        cout << a-b-1 << '\n';
        for (unsigned long long i=b+1; i<a; i++) {
            cout << i << ' ';
        }
    }
    else
        cout << 0 << '\n';

    return 0;
}
