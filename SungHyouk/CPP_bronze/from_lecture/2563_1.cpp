#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_SIZE 100
int mapping[MAX_SIZE + 1][MAX_SIZE + 1] = {0, };

int main()
{
    int N;
    // mapping: 색종이를 붙일 도화지 변수를 만든다.
    // N을 입력 받고
    cin >> N;
    // (x, y)를 입력 받고, 색종이가 붙여지는 부분은 숫자 1로 표시한다.

    while (N--)
    {
        // x, y를 입력 받고, 색종이를 채움
        int x, y;
        cin >> x >> y;

        // 색종이의 한 변의 길이가 10
        for (int i = x; i < x+10; i++)
        {
            for (int j = y; j < y+10; j++)
            {
                if (i > MAX_SIZE || j > MAX_SIZE) continue;
                mapping[i][j] = 1;
            }
        }
    }

    // 겹쳐진 넓이를 구함
    int cnt = 0;
    for (int i = 0; i < MAX_SIZE; i++)
        for (int j = 0; j < MAX_SIZE; j++)
            if (mapping[i][j] == 1) cnt++;

    cout << cnt << endl;
    return 0;
}