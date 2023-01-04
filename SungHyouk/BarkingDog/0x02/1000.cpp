/*
==============================================================================================
@ Title: A+B
@ URL: https://www.acmicpc.net/problem/1000
@ Author: sunghyouk
@ Created Date: 2022. 12. 21. 오후 11:39:30
@ Level: Bronze 5
@ Tags: implementation arithmetic math
@ Description:
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
@ Output: 첫째 줄에 A+B를 출력한다.
==============================================================================================
*/
#include <iostream>

int main(void) {
  int a, b;
  std::cin >> a >> b;
  std::cout << a+b;

  return 0;
}
