/*
==============================================================================================
@ Title: 부호
@ URL: https://www.acmicpc.net/problem/1247
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 8. 오전 10:46:32
@ Level: Bronze 3
@ Tags: arbitrary_precision arithmetic math
@ Description:
N개의 정수가 주어지면, 이 정수들의 합 S의 부호를 구하는 프로그램을 작성하시오.
@ Input: 총 3개의 테스트 셋이 주어진다. 각 테스트 셋의 첫째 줄에는 N(1 ≤ N ≤ 100,000)이 주어지고, 둘째 줄부터 N개의 줄에
걸쳐 각 정수가 주어진다. 주어지는 정수의 절댓값은 9223372036854775807보다 작거나 같다.
@ Output: 총 3개의 줄에 걸쳐 각 테스트 셋에 대해 N개의 정수들의 합 S의 부호를 출력한다. S=0이면 "0"을, S>0이면 "+"를,
S<0이면 "-"를 출력하면 된다.
==============================================================================================
*/
#include <iostream>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    for (int test=0; test<3; test++) {
        cin >> n;

        long long result = 0;
        long long overflow = 0;

        for (int i=0; i<n; i++) {
            long long number;
            cin >> number;

            if (result>0 && number>0 && number>LLONG_MAX-result) overflow += 1;
            if (result<0 && number<0 && number<LLONG_MIN-result) overflow -= 1;
            result += number;
        }
        if (overflow < 0) cout << "-\n";
        else if (overflow > 0) cout << "+\n";
        else if (result == 0) cout << "0\n";
        else if (result < 0) cout << "-\n";
        else cout << "+\n";
    }

    return 0;
}
