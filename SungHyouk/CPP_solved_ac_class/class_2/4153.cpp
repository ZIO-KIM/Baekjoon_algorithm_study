/*
==============================================================================================
@ Title: 직각삼각형
@ URL: https://www.acmicpc.net/problem/4153
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 20. 오후 3:55:00
@ Level: Bronze 3
@ Tags: geometry math pythagoras
@ Description:
과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 주어진 세변의 길이로 삼각형이 직각인지 아닌지
구분하시오.
@ Input: 입력은 여러개의 테스트케이스로 주어지며 마지막줄에는 0 0 0이 입력된다. 각 테스트케이스는 모두 30,000보다 작은 양의 정수로
주어지며, 각 입력은 변의 길이를 의미한다.
@ Output: 각 입력에 대해 직각 삼각형이 맞다면 "right", 아니라면 "wrong"을 출력한다.
==============================================================================================
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        vector<int> triangle;
        int a, b, c;
        cin >> a >> b >> c;
        triangle.push_back(a);
        triangle.push_back(b);
        triangle.push_back(c);
        sort(triangle.begin(), triangle.end());
        if (triangle[0] == 0 && triangle[1] == 0 && triangle[2] == 0) break;
        if (pow(triangle[0], 2) + pow(triangle[1], 2) == pow(triangle[2], 2)) cout << "right" << "\n";
        else cout << "wrong" << "\n";
    }

    return 0;
}
