/*
==============================================================================================
@ Title: 단어 정렬
@ URL: https://www.acmicpc.net/problem/1181
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 6. 오전 10:46:06
@ Level: Silver 5
@ Tags: sorting string
@ Description:
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오. 길이가 짧은 것부터 길이가
같으면 사전 순으로 단, 중복된 단어는 하나만 남기고 제거해야 한다.
@ Input: 첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한
줄에 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.
@ Output: 조건에 따라 정렬하여 단어들을 출력한다.
==============================================================================================
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool len_comp(string a, string b) {
    if (a.length() == b.length()) {
        for (int i=0; i<a.length(); i++) {
            if (a[i] != b[i])
                return a[i] < b[i];
        }
    }
    return a.length() < b.length();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    vector<string> words;
    cin >> N;

    for (int i=0; i<N; i++) {
        string each_word;
        cin >> each_word;
        words.push_back(each_word);
    }
    sort(words.begin(), words.end(), len_comp);

    cout << words[0] << '\n';

    for (int i=1; i<N; i++) {
        if (words[i-1] == words[i])
            continue;
        cout << words[i] << '\n';
    }
    
    return 0;
}
