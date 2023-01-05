/*
==============================================================================================
@ Title: 시험 성적
@ URL: https://www.acmicpc.net/problem/9498
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 5. 오후 3:13:30
@ Level: Bronze 5
@ Tags: implementation
@ Description:
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를
출력하는 프로그램을 작성하시오.
@ Input: 첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
@ Output: 시험 성적을 출력한다.
==============================================================================================
*/
#include <iostream>
using namespace std;
int main() {
  int score;
  cin >> score;
  if (score >= 90 && score <= 100)
    cout << 'A' << '\n';
  else if (score >= 80 && score <= 89)
    cout << 'B' << '\n';
  else if (score >= 70 && score <= 79)
    cout << 'C' << '\n';
  else if (score >= 60 && score <= 69)
    cout << 'D' << '\n';
  else
    cout << 'F';
    
  return 0;
}
