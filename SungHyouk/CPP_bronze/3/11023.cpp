/*
==============================================================================================
@ Title: 더하기 3
@ URL: https://www.acmicpc.net/problem/11023
@ Author: shc
@ Created Date: 2023. 2. 7. 오후 10:47:52
@ Level: Bronze 3
@ Tags: arithmetic implementation math
@ Description:
수 N개가 주어졌을 때, N개의 합을 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 N(1 ≤ N ≤ 100)개의 수가 공백으로 구분되어서 주어진다. 입력으로 주어지는 수는 10,000보다 작거나 같은
자연수이다. 또, 0으로 시작하는 수는 주어지지 않는다.
@ Output: 입력받은 수 N개의 합을 출력한다.
==============================================================================================
*/

#include <iostream>

using namespace std;
int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int number;
    int sum = 0;
    while (cin >> number) {
        sum += number;
    }
    cout << sum;
    return 0;
}
