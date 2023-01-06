/*
==============================================================================================
@ Title: 세수정렬
@ URL: https://www.acmicpc.net/problem/2752
@ Author: Sunghyouk Choi
@ Created Date: 2023. 1. 6. 오후 3:29:45
@ Level: Bronze 4
@ Tags: sorting
@ Description:
동규는 세수를 하다가 정렬이 하고싶어졌다. 숫자 세 개를 생각한 뒤에, 이를 오름차순으로 정렬하고 싶어 졌다. 숫자 세 개가 주어졌을
때, 가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오.
@ Input: 숫자 세 개가 주어진다. 이 숫자는 1보다 크거나 같고, 1,000,000보다 작거나 같다. 이 숫자는 모두 다르다.
@ Output: 제일 작은 수, 그 다음 수, 제일 큰 수를 차례대로 출력한다.
==============================================================================================
*/

#include <iostream>
using namespace std;
int main() {
  int val1, val2, val3;
  int temp;
  cin >> val1 >> val2 >> val3;
  if (val1 > val2) {
    temp = val1;
    val1 = val2;
    val2 = temp;
  }
  if (val2 > val3) {
    temp = val2;
    val2 = val3;
    val3 = temp;
  }
  if (val1 > val2) {
    temp = val1;
    val1 = val2;
    val2 = temp;
  }
  cout << val1 << " " << val2 << " " << val3;
	return 0;
}
