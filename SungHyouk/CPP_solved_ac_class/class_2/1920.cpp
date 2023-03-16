/*
==============================================================================================
@ Title: 수 찾기
@ URL: https://www.acmicpc.net/problem/1920
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 16. 오후 1:48:37
@ Level: Silver 4
@ Tags: binary_search data_structures sorting
@ Description:
N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.
@ Input: 첫째 줄에 자연수 N(1 ≤ N ≤ 100,000)이 주어진다. 다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이
주어진다. 다음 줄에는 M(1 ≤ M ≤ 100,000)이 주어진다. 다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에
존재하는지 알아내면 된다. 모든 정수의 범위는 -231 보다 크거나 같고 231보다 작다.
@ Output: M개의 줄에 답을 출력한다. 존재하면 1을, 존재하지 않으면 0을 출력한다.
==============================================================================================
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    vector<int> an;
    int M = 0;

    cin >> N;
    for (int i=0; i<N; ++i) {
        int each_an;
        cin >> each_an;
        an.push_back(each_an);
    }
    sort(an.begin(), an.end());

    cin >> M;
    for (int i=0; i<M; ++i) {
        int each_n;
        cin >> each_n;
        cout << binary_search(an.begin(), an.end(), each_n) << '\n';
    }
    
    return 0;
}
