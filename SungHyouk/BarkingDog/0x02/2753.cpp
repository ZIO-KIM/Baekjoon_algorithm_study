/*
==============================================================================================
@ Title: 윤년
@ URL: https://www.acmicpc.net/problem/2753
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 7. 오전 11:43:52
@ Level: Bronze 5
@ Tags: implementation arithmetic math
@ Description:
연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오. 윤년은 연도가 4의 배수이면서, 100의 배수가 아닐
때 또는 400의 배수일 때이다. 예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 1900년은 100의
배수이고 400의 배수는 아니기 때문에 윤년이 아니다. 하지만, 2000년은 400의 배수이기 때문에 윤년이다.
@ Input: 첫째 줄에 연도가 주어진다. 연도는 1보다 크거나 같고, 4000보다 작거나 같은 자연수이다.
@ Output: 첫째 줄에 윤년이면 1, 아니면 0을 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;
int main() {
  int cur_year;
  cin >> cur_year;

  if (cur_year % 4 == 0 && cur_year % 100 != 0)
    cout << 1;
  else if (cur_year % 400 == 0)
    cout << 1;
  else
    cout << 0;

  return 0;
}
