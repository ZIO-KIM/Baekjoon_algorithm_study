/*
==============================================================================================
@ Title: ゾロ目 (Same Numbers)
@ URL: https://www.acmicpc.net/problem/27324
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 29. 오후 12:24:40
@ Level: Bronze 5
@ Tags: arithmetic math
@ Description:
十進法で 2 桁の整数 N が与えられる． N の十の位の数字と一の位の数字が同じである場合は 1 を，そうでない場合は 0 を出力せよ．
@ Input: 入力は以下の形式で標準入力から与えられる． N
@ Output: N の十の位の数字と一の位の数字が同じである場合は 1 を，そうでない場合は 0 を出力せよ．
==============================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int a, b;
    a = n / 10;
    b = n % 10;

    if (a == b)
      cout << 1;
    else
      cout << 0;
    return 0;
}
