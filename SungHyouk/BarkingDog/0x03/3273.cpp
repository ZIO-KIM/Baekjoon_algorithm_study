/*
==============================================================================================
@ Title: 두 수의 합
@ URL: https://www.acmicpc.net/problem/3273
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 15. 오전 9:59:03
@ Level: Silver 3
@ Tags: sorting two_pointer
@ Description:
n개의 서로 다른 양의 정수 a1, a2, ..., an으로 이루어진 수열이 있다. ai의 값은 1보다 크거나 같고, 1000000보다
작거나 같은 자연수이다. 자연수 x가 주어졌을 때, ai + aj = x (1 ≤ i < j ≤ n)을 만족하는 (ai, aj)쌍의
수를 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 수열의 크기 n이 주어진다. 다음 줄에는 수열에 포함되는 수가 주어진다. 셋째 줄에는 x가 주어진다. (1 ≤ n ≤
100000, 1 ≤ x ≤ 2000000)
@ Output: 문제의 조건을 만족하는 쌍의 개수를 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;

int a[1000001] = {};
bool occur[2000001];
int n, x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int answer = 0;

    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    cin >> x;

    for (int i=0; i<n; i++) {
        if (x-a[i] > 0 && occur[x-a[i]]) answer++;
        occur[a[i]] = true;
    }
    cout << answer;

    return 0;
}
