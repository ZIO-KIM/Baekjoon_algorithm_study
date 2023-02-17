/*
==============================================================================================
@ Title: Quadrants
@ URL: https://www.acmicpc.net/problem/9772
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 17. 오전 11:56:09
@ Level: Bronze 4
@ Tags: geometry implementation math
@ Description:
Given the coordinates (x,y) of some points in 2-dimensional plane, find out
which quadrant(Q1-Q4) the points are located. If a point is located on
X-axis or Y-axis, print out AXIS instead.
@ Input: Each line contains a pair of real numbers which is the coordinate of a
point. Input is terminated by 0 0.
@ Output: Print out in each line Q1, Q2, Q3, Q4 or AXIS for each point.
==============================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    double x=100000;
    double y=100000;

    while (true) {
        cin >> x >> y;
        if (x>0 && y>0) cout << "Q1" << '\n';
        else if (x<0 && y>0) cout << "Q2" << '\n';
        else if (x<0 && y<0) cout << "Q3" << '\n';
        else if (x>0 && y<0) cout << "Q4" << '\n';
        else if (x==0 || y==0) cout << "AXIS" << '\n';
        if (x==0 && y==0) break;
    }
    return 0;
}
