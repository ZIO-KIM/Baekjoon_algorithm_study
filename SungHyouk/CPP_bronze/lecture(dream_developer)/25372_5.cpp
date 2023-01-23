#include <iostream>

using namespace std;

#define MAX_LEN 20

// 문자열의 길이를 인자로 받고
// 길이 상 6이상 9이하이면 true를 반환
// 그렇지 않다면 false를 반환하는 함수
bool isPossiblePass(int len)
{
    if (len >= 6 && len <= 9) return true;

    return false;
}

int getLength(char* str)
{
    int len = 0;
    char* ptr = str; // str의 시작 주소를 참조

    while (true)
    {
        if (*ptr == '\0') // 문자열의 끝까지
        {
            break;
        }
        else
        {
            ptr++;  // str의 다음 원소의 주소를 참조
            len++;
        }
    }
    return len;
}

int main() {
    int N;
    char str[MAX_LEN + 1] = {0, }; // 0으로 배열을 초기화
    cin >> N;

    while (N--)
    {
        cin >> str;
        if (isPossiblePass(getLength(str)) == true)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    // N을 입력받아 (최대 20)
    // 해당 문자열의 길이 (strlen)가 6이상 9이하면 yes, 그렇지 않으면 no로 판단

    return 0;
}