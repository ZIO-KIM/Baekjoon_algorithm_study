/*
==============================================================================================
@ Title: 첫 글자를 대문자로
@ URL: https://www.acmicpc.net/problem/4458
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 6. 오후 1:55:25
@ Level: Bronze 3
@ Tags: implementation string
@ Description:
문장을 읽은 뒤, 줄의 첫 글자를 대문자로 바꾸는 프로그램을 작성하시오.
@ Input: 첫째 줄에 줄의 수 N이 주어진다. 다음 N개의 줄에는 문장이 주어진다. 각 문장에 들어있는 글자의 수는 30을 넘지 않는다. 모든
줄의 첫 번째 글자는 알파벳이다.
@ Output: 각 줄의 첫글자를 대문자로 바꾼뒤 출력한다.
==============================================================================================
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int line = 0;
    cin >> line;

    string str;
    cin.ignore();

    for (int i=0; i<line; i++) {
        getline(cin, str);

        if ('a' <= str[0] && str[0] <= 'z')
            str[0] -= 32;
        cout << str << '\n';
    }
    return 0;
}
