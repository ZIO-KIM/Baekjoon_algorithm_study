/*
==============================================================================================
@ Title: 개수 세기
@ URL: https://www.acmicpc.net/problem/10807
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 13. 오전 9:59:38
@ Level: Bronze 5
@ Tags: implementation
@ Description:
총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 셋째 줄에는 찾으려고 하는
정수 v가 주어진다. 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.
@ Output: 첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.
==============================================================================================
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, v, a[201] = {};
    cin >> N;
    
    while (N--) {
        int t;
        cin >> t;
        a[t+100]++;
    }
    cin >> v;
    cout << a[v+100];

    return 0;
}
