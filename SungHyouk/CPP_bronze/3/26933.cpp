/*
==============================================================================================
@ Title: Receptet
@ URL: https://www.acmicpc.net/problem/26933
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 21. 오전 11:14:04
@ Level: Bronze 3
@ Tags: arithmetic math
@ Description:
Du har bestämt dig för att laga mat. För att laga maten behöver du $N$
ingredienser. För varje ingrediens vet du hur mycket du redan har hemma,
hur mycket du behöver totalt samt kostnaden för ingrediensen om du måste
köpa den. Du skall alltså köpa den mängd av varje ingrediens som du saknar.
Uppgiften är att beräkna kostnaden för att laga maten.
@ Input: Den första raden består av ett heltal $N$ ($1 \le N \le 5$), antalet
ingredienser. De nästa $N$ raderna beskriver en ingrediens med tre heltal
$H, B, K$ ($0 \le H, B \le 1\,000$, $1 \le K \le 1\,000$) som står för hur
mycket du har, hur mycket som behövs och hur mycket den kostar.
@ Output: Skriv ut ett enda heltal -- den totala kostnaden för ingredienserna.
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    int H = 0, B = 0, K = 0;
    int sum = 0;

    cin >> N;
    for (int i=0; i<N; ++i) {
        cin >> H >> B >> K;
        if (B-H < 0) continue;
        else
            sum += (B-H) * K;
    }
    cout << sum;
    
    return 0;
}
