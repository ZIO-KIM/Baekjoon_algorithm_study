/*
==============================================================================================
@ Title: 문자와 문자열
@ URL: https://www.acmicpc.net/problem/27866
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 8. 오전 11:45:05
@ Level: Bronze 5
@ Tags: implementation string
@ Description:
단어 $S$와 정수 $i$가 주어졌을 때, $S$의 $i$번째 글자를 출력하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어 $S$가 주어진다. 단어의 길이는 최대 $1\,000$이다. 둘째 줄에 정수 $i$가
주어진다. ($1 \le i \le \left|S\right|$)
@ Output: $S$의 $i$번째 글자를 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    int i = 0;
    cin >> S >> i;

    cout << S[i-1];
    
    return 0;
}
