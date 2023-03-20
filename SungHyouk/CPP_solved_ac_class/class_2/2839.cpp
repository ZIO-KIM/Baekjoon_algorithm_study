/*
==============================================================================================
@ Title: 설탕 배달
@ URL: https://www.acmicpc.net/problem/2839
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 15. 오후 5:01:56
@ Level: Silver 4
@ Tags: dp greedy math
@ Description:
상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다. 설탕공장에서
만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다. 상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고
가려고 한다. 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램
1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다. 상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면
되는지 그 수를 구하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 N이 주어진다. (3 ≤ N ≤ 5000)
@ Output: 상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int large, small;
    large = n / 5;

    while (true) {
        if (large < 0) {
            cout << "-1";
            return 0;
        }
        if ( (n - (5*large)) % 3 == 0 ) {
            small = (n - (5*large) ) / 3;
            break;
        }
        large--;
    }
    cout << large+small;
    
    return 0;
}