/*
==============================================================================================
@ Title: 이항 계수 1
@ URL: https://www.acmicpc.net/problem/11050
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 28. 오후 1:17:01
@ Level: Bronze 1
@ Tags: combinatorics implementation math
@ Description:
자연수 \(N\)과 정수 \(K\)가 주어졌을 때 이항 계수 \(\binom{N}{K}\)를 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 \(N\)과 \(K\)가 주어진다. (1 ≤ \(N\) ≤ 10, 0 ≤ \(K\) ≤ \(N\))
@ Output:  \(\binom{N}{K}\)를 출력한다.
==============================================================================================
*/
#include <iostream>

using namespace std;

int factorial(int n) {
    int answer = 1;
    for (int i=n; i>0; i--)
        answer *= i;
    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int result = factorial(n) / (factorial(k) * factorial(n-k));
    cout << result;

    return 0;
}
