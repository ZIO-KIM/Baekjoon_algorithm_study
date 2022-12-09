#include <iostream>
using namespace std;

#define MAX_SIZE 16

int main()
{
    // N이 최대 15
    // A0 = 4 --> 2
    // A1 = 9 --> 3
    // A2 = 25 --> 5
    int data[MAX_SIZE] = {0,};
    data[0] = 2;

    for (int i = 1; i < MAX_SIZE; i++)
    {
        data[i] = data[i-1] * 2 - 1;
    }
    int N;
    cin >> N;
    cout << data[N] * data[N] << endl;

    return 0;
}