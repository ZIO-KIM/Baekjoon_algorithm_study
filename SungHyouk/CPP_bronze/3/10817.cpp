/*
==============================================================================================
@ Title: 세 수
@ URL: https://www.acmicpc.net/problem/10817
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 24. 오후 10:54:08
@ Level: Bronze 3
@ Tags: implementation sorting
@ Description:
세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 
@ Input: 첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)
@ Output: 두 번째로 큰 정수를 출력한다.
==============================================================================================
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> numbers = {0, 0, 0};
    for (int i=0; i<3; i++){
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    cout << numbers[1];
    return 0;
}
