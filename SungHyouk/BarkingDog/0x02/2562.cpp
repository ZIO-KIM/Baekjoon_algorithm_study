/*
==============================================================================================
@ Title: 최댓값
@ URL: https://www.acmicpc.net/problem/2562
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 7. 오후 3:13:23
@ Level: Bronze 3
@ Tags: implementation
@ Description:
9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오. 예를 들어,
서로 다른 9개의 자연수 3, 29, 38, 12, 57, 74, 40, 85, 61 이 주어지면, 이들 중 최댓값은 85이고, 이
값은 8번째 수이다.
@ Input: 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100 보다 작다.
@ Output: 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[9];
    int maxVal = 0, maxIdx = 0;
    for (int i=0; i<9; i++) {
        cin >> arr[i];
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }
    cout << maxVal << '\n' << maxIdx+1;

    return 0;
}
