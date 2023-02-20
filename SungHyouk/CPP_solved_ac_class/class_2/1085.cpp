/*
==============================================================================================
@ Title: 직사각형에서 탈출
@ URL: https://www.acmicpc.net/problem/1085
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 20. 오후 3:27:38
@ Level: Bronze 3
@ Tags: geometry math
@ Description:
한수는 지금 (x, y)에 있다. 직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w,
h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 x, y, w, h가 주어진다.
@ Output: 첫째 줄에 문제의 정답을 출력한다.
==============================================================================================
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int hs_x, hs_y, w, h;
    int x = 0;
    int y = 0;
    cin >> hs_x >> hs_y >> w >> h;

    vector<int> dist;

    dist.push_back(hs_x - x);
    dist.push_back(hs_y - y);
    dist.push_back(w - hs_x);
    dist.push_back(h - hs_y);

    cout << *min_element(dist.begin(), dist.end());
    return 0;
}
