/*
==============================================================================================
@ Title: 배수 찾기
@ URL: https://www.acmicpc.net/problem/4504
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 11. 오후 11:31:09
@ Level: Bronze 3
@ Tags: arithmetic math
@ Description:
정수 n(0 < n < 1000)과 수의 목록이 주어졌을 때, 목록에 들어있는 수가 n의 배수인지 아닌지를 구하는 프로그램을
작성하시오.
@ Input: 첫째 줄에 n이 주어진다. 다음 줄부터 한 줄에 한 개씩 목록에 들어있는 수가 주어진다. 이 수는 0보다 크고, 10,000보다 작다.
목록은 0으로 끝난다.
@ Output: 목록에 있는 수가 n의 배수인지 아닌지를 구한 뒤 예제 출력처럼 출력한다.
==============================================================================================
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (true) {
        int num_list;
        cin >> num_list;
        if (num_list == 0) return 0;
        if (num_list % n == 0)
            cout << num_list << " is a multiple of " << n << ".\n";
        else
            cout << num_list << " is NOT a multiple of " << n << ".\n";
    }
}
