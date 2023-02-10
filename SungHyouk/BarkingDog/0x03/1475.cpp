/*
==============================================================================================
@ Title: 방 번호
@ URL: https://www.acmicpc.net/problem/1475
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 10. 오후 3:59:26
@ Level: Silver 5
@ Tags: implementation
@ Description:
다솜이는 은진이의 옆집에 새로 이사왔다. 다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다. 다솜이의 옆집에서는
플라스틱 숫자를 한 세트로 판다. 한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다. 다솜이의 방 번호가 주어졌을 때, 필요한
세트의 개수의 최솟값을 출력하시오. (6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)
@ Input: 첫째 줄에 다솜이의 방 번호 N이 주어진다. N은 1,000,000보다 작거나 같은 자연수이다.
@ Output: 첫째 줄에 필요한 세트의 개수를 출력한다.
==============================================================================================
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int address;
    cin >> address;
    vector<int> counts(10, 0);
    int max_val = 0;
    
    while (address) {
        counts[address%10]++;
        address /= 10;
    }
    for (int i=0; i<10; i++) {
        if (i==6 || i==9) continue;
        max_val = max(max_val, counts[i]);
    }
    max_val = max(max_val, (counts[6]+counts[9]+1)/2);
    cout << max_val;

    return 0;
}