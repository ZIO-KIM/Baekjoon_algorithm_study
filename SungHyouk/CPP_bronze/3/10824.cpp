/*
==============================================================================================
@ Title: 네 수
@ URL: https://www.acmicpc.net/problem/10824
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 28. 오후 10:19:17
@ Level: Bronze 3
@ Tags: arithmetic implementation math string
@ Description:
네 자연수 A, B, C, D가 주어진다. 이때, A와 B를 붙인 수와 C와 D를 붙인 수의 합을 구하는 프로그램을 작성하시오. 두
수 A와 B를 합치는 것은 A의 뒤에 B를 붙이는 것을 의미한다. 즉, 20과 30을 붙이면 2030이 된다.
@ Input: 첫째 줄에 네 자연수 A, B, C, D가 주어진다. (1 ≤ A, B, C, D ≤ 1,000,000)
@ Output: A와 B를 붙인 수와 C와 D를 붙인 수의 합을 출력한다.
==============================================================================================
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    long long ab = 0;
    long long cd = 0;
    ab = stoll(a+b);
    cd = stoll(c+d);
    cout << ab+cd;

    return 0;
}
