#include <iostream>
using namespace std;

#define BOARD_SIZE 6
int main()
{
    // 1. 원래 있어야 할 각 피스의 갯수를 담을 배열을 만듦
    int answer[BOARD_SIZE] = {1, 1, 2, 2, 2, 8};
    // 2. 가지고 있는 각 피스를 입력 받음
    int board[BOARD_SIZE] = {0, };

    for (int i = 0; i < BOARD_SIZE; i++)
        cin >> board[i];

    // 각각 원래 있어야 할 피스와 가지고 있는 피스의 차를 출력
    cout << answer[0] - board[0];

    for (int i = 1; i < BOARD_SIZE; i++)
        cout << " " << answer[i] - board[i];

    cout << endl;
    return 0;
}