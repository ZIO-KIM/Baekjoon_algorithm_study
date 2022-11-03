#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 뒤에서부터 2진수 세자리가 8진수 한자리 이므로 문자열로 그대로 받는 것이 좋다.
    string binary;
    cin >> binary;

    // 맨 앞에 3으로 나눠 떨어지지 않는 자리수는 0으로 패딩
    // 한 자리가 남고 바로 변환한 값을 출력해 줌
    if (binary.length() % 3 == 1)
    {
        cout << binary[0];
    }
    // 앞의 두 자리가 남을 때 8진수 변환을 해야 한다.
    else if (binary.length() % 3 == 2)
    {
        cout << (binary[0] - '0') * 2 + (binary[1] - '0');
    }
    // 나머지 부분을 8진수로 변환
    int i = binary.length() % 3;

    while (i < binary.length())
    {
        // 3자리씩 처리
        cout << (binary[i] - '0') * 4 + (binary[i+1] - '0') * 2 + (binary[i+2] - '0');
        i += 3;
    }
    cout << endl;
    return 0;
}