/*
==============================================================================================
@ Title: A×B
@ URL: https://www.acmicpc.net/problem/10998
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 20. 오후 5:20:48
@ Level: Bronze 5
@ Tags: implementation arithmetic math
@ Description:
두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
@ Output: 첫째 줄에 A×B를 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << a*b;
    
    return 0;
}
