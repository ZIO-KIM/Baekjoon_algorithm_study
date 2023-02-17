/*
==============================================================================================
@ Title: 요세푸스 문제
@ URL: https://www.acmicpc.net/problem/1158
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 17. 오전 11:16:55
@ Level: Silver 4
@ Tags: data_structures queue
@ Description:
요세푸스 문제는 다음과 같다. 1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다. 이제
순서대로 K번째 사람을 제거한다. 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 이 과정은 N명의
사람이 모두 제거될 때까지 계속된다. 원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다. 예를 들어 (7,
3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다. N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을
작성하시오.
@ Input: 첫째 줄에 N과 K가 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ K ≤ N ≤ 5,000)
@ Output: 예제와 같이 요세푸스 순열을 출력한다.
==============================================================================================
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K, len = 0;
int pre[5001];
int nxt[5001];

vector<int> v;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;

    for (int i=1; i<=N; ++i) {
        pre[i] = (i==1) ? N : i - 1;
        nxt[i] = (i==N) ? 1 : i + 1;
        ++len;
    }

    int i=1;
    for (int cur=1; len!=0; cur=nxt[cur]) {
        if (i==K) {
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur];
            v.push_back(cur);
            i = 1;
            --len;
        }
        else ++i;
    }

    cout << "<";
    for (size_t i=0; i<v.size(); ++i) {
        cout << v[i];
        if (i != v.size()-1) cout << ", ";
    }
    cout << ">";

    return 0;
}
