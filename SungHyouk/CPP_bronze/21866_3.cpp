#include <iostream>
using namespace std;
#define MAX_SUBJECT 9

int main()
{
    // 1. 만점에 대한 배열을 하나 구성
    int dest[MAX_SUBJECT] = {100, 100, 200, 200, 300, 300, 400, 400, 500};

    // 2. 학생이 받은 점수를 입력 받음
    int score[MAX_SUBJECT] = {9};

    // 3. 학생이 받은 총점을 확인하고 100이상인지 미만인지 확인
    int tot = 0;
    bool isHacker = false;

    for (int i = 0; i < MAX_SUBJECT; i++)
    {
        cin >> score[i];
        tot += score[i];

        if (score[i] > dest[i])  // 만점을 넘는 부분이 있으면
        {
            isHacker = true;
        }
    }

     // 4. 추첨 대상자라면 해커인지 확인
    if (tot < 100)
    {
        cout << "none" << endl;
    }
    else
    {
        if (isHacker) cout << "hacker" << endl;
        else
            cout << "draw" << endl;
    }

    return 0;
}