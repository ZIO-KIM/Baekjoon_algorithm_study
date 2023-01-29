/*
==============================================================================================
@ Title: 11 月 (November)
@ URL: https://www.acmicpc.net/problem/27332
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 29. 오후 12:36:05
@ Level: Bronze 4
@ Tags: arithmetic math
@ Description:
2 つの整数 A, B が与えられる． 2022 年 11 月 A 日の B 週間後の日が 2022 年 11 月ならば 1 を，2022 年 11
月でないならば 0 を出力せよ． ただし，2022 年 11 月は 2022 年 11 月 1 日から 2022 年 11 月 30 日までの 30
日間であり，x 週間後の日とは (7 × x) 日後の日のことを指す．
@ Input: 入力は以下の形式で与えられる． A B
@ Output: 2022 年 11 月 A 日の B 週間後の日が 2022 年 11 月ならば 1 を，2022 年 11 月でないならば 0 を出力せよ．
==============================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;

    int day;
    day = a + b*7;
    
    if (day > 30)
      cout << 0;
    else
      cout << 1;

    return 0;
}
