/*
==============================================================================================
@ Title: 모음의 개수
@ URL: https://www.acmicpc.net/problem/10987
@ Author: shc
@ Created Date: 2023. 2. 7. 오후 9:23:09
@ Level: Bronze 3
@ Tags: implementation string
@ Description:
알파벳 소문자로만 이루어진 단어가 주어진다. 이때, 모음(a, e, i, o, u)의 개수를 출력하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 단어가 주어진다. 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다.
@ Output: 첫째 줄에 모음의 개수를 출력한다.
==============================================================================================
*/

#include <iostream>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string one_line;
    cin >> one_line;

    int count = 0;
    for (char i : one_line) {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
            count += 1;
    }
    cout << count;

    return 0;
}
