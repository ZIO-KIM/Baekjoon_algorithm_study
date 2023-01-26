/*
==============================================================================================
@ Title: 그대로 출력하기 2
@ URL: https://www.acmicpc.net/problem/11719
@ Author: shc
@ Created Date: 2023. 1. 26. 오후 10:42:39
@ Level: Bronze 3
@ Tags: implementation string
@ Description:
입력 받은 대로 출력하는 프로그램을 작성하시오.
@ Input: 입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 각 줄은 100글자를
넘지 않으며, 빈 줄이 주어질 수도 있고, 각 줄의 앞 뒤에 공백이 있을 수도 있다.
@ Output: 입력받은 그대로 출력한다.
==============================================================================================
*/
#include <iostream>
#include <string>

using namespace std;
int main() {
    string str;
    string ans;
    
    for (int i=0; i<100 && !cin.eof(); i++) {
      getline(cin, str);
      if (i>0)
        ans += '\n';
      ans += str;
    }
    cout << ans;

	  return 0;
}
