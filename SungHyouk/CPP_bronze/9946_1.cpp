#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string first, second;
    // 두 개의 문자열을 받는다.
    // 같으면 same, 다르면 different 출력
    // case number를 출력해야할 변수 하나 필요
    int caseNumber = 1;
    // 두 개 문자열 모두 END를 입력 받았을 때 종료

    while (true)
    {
        cin >> first;
        cin >> second;

        if (first == "END" && second == "END") break;
        // 두 개의 문자열을 알파벳 순서로 정렬해서 비교
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());

        if (first != second)
        {
            cout << "Case " << caseNumber++ << ": " << "different" << endl;
        }
        else
        {
            cout << "Case " << caseNumber++ << ": " << "same" << endl;
        }
    }

    return 0;
}