/*
==============================================================================================
@ Title: 달팽이는 올라가고 싶다
@ URL: https://www.acmicpc.net/problem/2869
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 1. 오전 11:10:08
@ Level: Bronze 1
@ Tags: math
@ Description:
땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다. 달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에
잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다. 달팽이가 나무 막대를 모두 올라가려면, 며칠이
걸리는지 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 세 정수 A, B, V가 공백으로 구분되어서 주어진다. (1 ≤ B < A ≤ V ≤ 1,000,000,000)
@ Output: 첫째 줄에 달팽이가 나무 막대를 모두 올라가는데 며칠이 걸리는지 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long a, b, v;
    cin >> a >> b >> v;

    if ((v-b)%(a-b) != 0) cout << (unsigned long long) (v-b)/(a-b) + 1;
    else cout << (unsigned long long) (v-b)/(a-b);
    return 0;
}
