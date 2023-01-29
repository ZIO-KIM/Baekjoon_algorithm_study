/*
==============================================================================================
@ Title: 2 桁の整数 (Two-digit Integer)
@ URL: https://www.acmicpc.net/problem/27331
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 29. 오후 12:32:49
@ Level: Bronze 5
@ Tags: implementation
@ Description:
2 つの数字 A, B が与えられる． 十の位が A であり，一の位が B である 2 桁の正の整数を出力せよ．
@ Input: 入力は以下の形式で与えられる． A B
@ Output: 十の位が A であり，一の位が B である 2 桁の正の整数を出力せよ．
==============================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;

    cout << a*10+b;

    return 0;
}
