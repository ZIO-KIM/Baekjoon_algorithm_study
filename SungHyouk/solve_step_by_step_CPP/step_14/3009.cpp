/*
==============================================================================================
@ Title: 네 번째 점
@ URL: https://www.acmicpc.net/problem/3009
@ Author: shc
@ Created Date: 2023. 1. 27. 오전 10:49:37
@ Level: Bronze 3
@ Tags: geometry implementation
@ Description:
세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.
@ Input: 세 점의 좌표가 한 줄에 하나씩 주어진다. 좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.
@ Output: 직사각형의 네 번째 점의 좌표를 출력한다.
==============================================================================================
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> points_x(3);
    vector<int> points_y(3);

    for (int i=0; i<3; i++) {
        cin >> points_x[i] >> points_y[i];
    }
    if (points_x[0] == points_x[1])
        cout << points_x[2] << ' ';
    else if (points_x[0] == points_x[2])
        cout << points_x[1] << ' ';
    else
        cout << points_x[0] << ' ';

    if (points_y[0] == points_y[1])
        cout << points_y[2];
    else if (points_y[0] == points_y[2])
        cout << points_y[1];
    else
        cout << points_y[0];
    return 0;
}
