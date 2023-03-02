/*
==============================================================================================
@ Title: 최대공약수와 최소공배수
@ URL: https://www.acmicpc.net/problem/2609
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 2. 오전 11:33:25
@ Level: Bronze 1
@ Tags: euclidean math number_theory
@ Description:
두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.
@ Input: 첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.
@ Output: 첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q;
    cin >> p >> q;

    int g = gcd(p, q);
    cout << g << '\n';
    cout << (p*q) / g << '\n';
    
    return 0;
}
