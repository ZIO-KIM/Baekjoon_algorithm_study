/*
==============================================================================================
@ Title: 알파벳 개수
@ URL: https://www.acmicpc.net/problem/10808
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 10. 오후 2:48:08
@ Level: Bronze 4
@ Tags: implementation string
@ Description:
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.
@ Output: 단어에 포함되어 있는 a의 개수, b의 개수, …, z의 개수를 공백으로 구분해서 출력한다.
==============================================================================================
*/
#include <iostream>
#include <string>
using namespace std;

int freq[26];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    for (auto c: S)
        freq[c-'a']++;
    for (int i=0; i<26; i++)
        cout << freq[i] << ' ';
    
    return 0;
}
