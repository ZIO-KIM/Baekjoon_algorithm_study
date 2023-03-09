/*
==============================================================================================
@ Title: 좌표 정렬하기 2
@ URL: https://www.acmicpc.net/problem/11651
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 9. 오후 5:17:49
@ Level: Silver 5
@ Tags: sorting
@ Description:
2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는
프로그램을 작성하시오.
@ Input: 첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다.
(-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.
@ Output: 첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.
==============================================================================================
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int>a, pair<int, int>b) {
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, x, y;
    vector<pair<int, int>> vec;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> x >> y;
        vec.emplace_back(x, y);
    }
    sort(vec.begin(), vec.end(), compare);
    for (int i=0; i<N; i++)
        cout << vec[i].first << " " << vec[i].second << '\n';
    
    return 0;
}
