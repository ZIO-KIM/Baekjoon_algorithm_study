/*
==============================================================================================
@ Title: 소수 찾기
@ URL: https://www.acmicpc.net/problem/1978
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 20. 오후 4:25:17
@ Level: Silver 5
@ Tags: math number_theory primality_test sieve
@ Description:
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
@ Input: 첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
@ Output: 주어진 수들 중 소수의 개수를 출력한다.
==============================================================================================
*/
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int count = 0;
    cin >> n;
    while (n--) {
        int num;
        bool flag = false;
        cin >> num;

        if (num == 1) continue;
        for (int i=2; i<num; i++) {
            if (num % i == 0) flag = true;
        }
        if (!flag) count++;
    }
    cout << count << '\n';

    return 0;
}
