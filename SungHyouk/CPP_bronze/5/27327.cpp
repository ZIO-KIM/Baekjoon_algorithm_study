/*
==============================================================================================
@ Title: 時間 (Hour)
@ URL: https://www.acmicpc.net/problem/27327
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 29. 오후 12:27:50
@ Level: Bronze 5
@ Tags: arithmetic math
@ Description:
1 日は 24 時間である． 整数 X が与えられる． X 日は何時間か求めよ．
@ Input: 入力は以下の形式で標準入力から与えられる． X
@ Output: X 日は何時間か，単位 (時間) を省いて出力せよ．
==============================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    cout << x*24;

    return 0;
}
