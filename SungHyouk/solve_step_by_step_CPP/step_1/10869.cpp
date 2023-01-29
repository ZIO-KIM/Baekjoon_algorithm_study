/*
==============================================================================================
@ Title: 사칙연산
@ URL: https://www.acmicpc.net/problem/10869
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 5. 오후 2:45:04
@ Level: Bronze 5
@ Tags: implementation arithmetic math
@ Description:
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
@ Input: 두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)
@ Output: 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  cout << a+b << '\n';
  cout << a-b << '\n';
  cout << a*b << '\n';
  cout << a/b << '\n';
  cout << a%b << '\n';
  return 0;
}
