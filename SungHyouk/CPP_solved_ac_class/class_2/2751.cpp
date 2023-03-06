/*
==============================================================================================
@ Title: 수 정렬하기 2
@ URL: https://www.acmicpc.net/problem/2751
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 6. 오후 1:48:11
@ Level: Silver 5
@ Tags: sorting
@ Description:
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이
1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
@ Output: 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
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
    vector<int> numbers;
    cin >> N;

    for (int i=0; i<N; i++) {
        int tmp = 0;
        cin >> tmp;
        numbers.push_back(tmp);
    }
    sort(numbers.begin(), numbers.end());

    for (const auto& i: numbers) {
        cout << i << '\n';
    }
    
    return 0;
}
