/*
==============================================================================================
@ Title: 三方比較 (Three-Way Comparison)
@ URL: https://www.acmicpc.net/problem/27328
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 29. 오후 12:29:44
@ Level: Bronze 5
@ Tags: arithmetic implementation math
@ Description:
2 つの整数 A, B が与えられる． A と B の大小を比較し，A ＜ B ならば -1 を，A ＝ B ならば 0 を，A ＞ B ならば 1
を出力せよ．
@ Input: 入力は以下の形式で標準入力から与えられる． A B
@ Output: A ＜ B ならば -1 を，A ＝ B ならば 0 を，A ＞ B ならば 1 を出力せよ．
==============================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;

    if (a<b)
      cout << -1;
    else if (a==b)
      cout << 0;
    else
      cout << 1;

    return 0;
}
