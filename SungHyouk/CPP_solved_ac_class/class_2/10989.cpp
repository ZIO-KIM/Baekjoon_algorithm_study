/*
==============================================================================================
@ Title: 수 정렬하기 3
@ URL: https://www.acmicpc.net/problem/10989
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 28. 오후 4:56:22
@ Level: Bronze 1
@ Tags: sorting
@ Description:
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 이
수는 10,000보다 작거나 같은 자연수이다.
@ Output: 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
==============================================================================================
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    int number = 0;
    int num_arr[10001] = {0, };

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> number;
        num_arr[number]++;
    }
    for (int i=0; i<=10000; i++) {
        for (int j=0; j<num_arr[i]; j++)
            cout << i << '\n';
    }
    
    return 0;
}
