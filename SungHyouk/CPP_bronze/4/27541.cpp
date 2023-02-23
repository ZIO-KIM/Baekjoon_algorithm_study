/*
==============================================================================================
@ Title: 末尾の文字 (Last Letter)
@ URL: https://www.acmicpc.net/problem/27541
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 23. 오후 2:12:26
@ Level: Bronze 4
@ Tags: implementation string
@ Description:
JOI 高校の生徒である葵は，文字列 JOIG が，文字列 JOI の末尾に文字 G を付け加えてできることに気が付いた．
そこから葵は，様々な文字列について，末尾に文字 G を付け加えたり，末尾の文字 G を取り除いて遊ぶようになった．
具体的には，葵は文字列を見ると次のように遊ぶ． 見た文字列の末尾の文字が G のとき，末尾の文字 G
を取り除いた文字列を思い浮かべる．取り除く文字は末尾の 1 文字のみである． 見た文字列の末尾の文字が G でないとき，文字列の末尾に文字 G
を付け加えた文字列を思い浮かべる． 長さ N の文字列 S が与えられる．葵が文字列 S を見たとき思い浮かべる文字列を求めるプログラムを作成せよ．
@ Input: 入力は以下の形式で与えられる． N S
@ Output: 葵が文字列 S を見たとき思い浮かべる文字列を出力せよ．
==============================================================================================
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    string s;
    cin >> n;
    cin >> s;

    if (s.back() == 'G') {
        for (int i=0; i<n-1; i++) {
            cout << s[i];
        }
    }
    else {
        cout << s << 'G';
    }
    return 0;
}
