/*
==============================================================================================
@ Title: Quality-Adjusted Life-Year
@ URL: https://www.acmicpc.net/problem/22279
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 21. 오전 11:20:53
@ Level: Bronze 3
@ Tags: arithmetic math
@ Description:
The Quality-Adjusted Life-Year (QALY) is a way to measure a person's
quality of life that includes both the quality and the quantity of life
lived. The quality of life lived can be quantified as a number between $0$
and $1$.  If someone is living with perfect health, the quality of life is
$1$.  If someone is dead, then the quality of life is $0$.  The quality of
life may increase or decrease due to medical treatements, sickness, etc.
The QALY for each period in which the quality of life is constant is simply
the product of the quality of life and the length of the period (in years).
 We wish to know the amount of QALY accumulated by a person at the time of
death, given the complete history of this person.
@ Input: The first line of input contains a single integer $N$ ($1 \leq N \leq
100$), which is the number of periods of constant quality of life during
the person's lifetime. The next $N$ lines describe the periods of life.
Each of these lines contains two real numbers $q$ ($0 < q \leq 1$), which
is the quality of life in this period, and $y$ ($0 < y \leq 100$), which is
the number of years in this period. All real numbers will be specified to
exactly one decimal place.
@ Output: Display the QALY accumulated by the person. Your answer will be considered
correct if its absolute error does not exceed $10^{-3}$.
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;
    double q = 0, y = 0;
    double sum = 0;

    cin >> N;
    for (int i=0; i<N; ++i) {
        cin >> q >> y;
        sum += q*y;
    }
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << sum;
    
    return 0;
}
