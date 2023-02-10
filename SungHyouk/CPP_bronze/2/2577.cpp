/*
==============================================================================================
@ Title: 숫자의 개수
@ URL: https://www.acmicpc.net/problem/2577
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 10. 오후 3:20:30
@ Level: Bronze 2
@ Tags: arithmetic implementation math
@ Description:
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는
프로그램을 작성하시오. 예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 ×
427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
@ Input: 첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은
자연수이다.
@ Output: 첫째 줄에는 A × B × C의 결과에 0 이 몇 번 쓰였는지 출력한다. 마찬가지로 둘째 줄부터 열 번째 줄까지 A × B × C의
결과에 1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.
==============================================================================================
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int res = a*b*c;
    vector<int> counts(10, 0);

    while (res > 0) {
        counts[res%10]++;
        res /= 10;
    }
    for (int i=0; i<10; i++) cout << counts[i] << '\n';
    
    return 0;
}
