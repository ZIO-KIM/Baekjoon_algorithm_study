/*
==============================================================================================
@ Title: 長方形 (Rectangle)
@ URL: https://www.acmicpc.net/problem/27323
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 29. 오후 12:19:09
@ Level: Bronze 5
@ Tags: arithmetic geometry math
@ Description:
整数 A, B が与えられる．縦の辺の長さが A cm，横の辺の長さが B cm である下図のような長方形の面積は何 cm2 か求めよ．
@ Input: 入力は以下の形式で標準入力から与えられる． A B
@ Output: 縦の辺の長さが A cm，横の辺の長さが B cm である長方形の面積は何 cm2 か，単位 (cm2) を省いて出力せよ．
==============================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    cout << a*b;

    return 0;
}
