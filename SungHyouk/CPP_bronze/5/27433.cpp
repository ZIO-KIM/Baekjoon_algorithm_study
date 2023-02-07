/*
==============================================================================================
@ Title: 팩토리얼 2
@ URL: https://www.acmicpc.net/problem/27433
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 7. 오전 11:49:25
@ Level: Bronze 5
@ Tags: arithmetic math
@ Description:
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 정수 N(0 ≤ N ≤ 20)이 주어진다.
@ Output: 첫째 줄에 N!을 출력한다.
==============================================================================================
*/
#include <iostream>

using namespace std;
long long int Factorial(int n) {
    long long int result = 1;
    if (n==0) return 1;
    else {
        for (int i=1; i<=n; i++) {
            result *= i;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << Factorial(n);

    return 0;
}
