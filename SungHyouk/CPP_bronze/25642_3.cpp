#include <iostream>
using namespace std;

int main()
{
    // 용태, 유진의 손가락 입력받고
    int yt, yj;

    cin >> yt >> yj;
    // 턴을 진행하면서 게임을 반복
    // 먼저 다섯개의 손가락을 편 사람이 진다.
    bool turn = false;  // false면 용태의 턴, true면 유진의 턴

    while (yt < 5 && yj < 5)
    {
        if (turn == false)
        {
            yj += yt;
            turn = true;
        }
        else
        {
            yt += yj;
            turn = false;
        }
    }
    if (yt >= 5)
    {
        cout << "yj" << endl;
    }
    else
    {
        cout << "yt" << endl;
    }

    return 0;
}