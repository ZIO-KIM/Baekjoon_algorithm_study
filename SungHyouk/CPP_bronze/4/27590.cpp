/*
==============================================================================================
@ Title: Sun and Moon
@ URL: https://www.acmicpc.net/problem/27590
@ Author: Sunghyouk Choi
@ Created Date: 2023. 3. 1. 오후 12:37:50
@ Level: Bronze 4
@ Tags: implementation simulation
@ Description:
You recently missed an eclipse and are waiting for the next one! To see any
eclipse from your home, the sun and the moon must be in alignment at
specific positions. You know how many years ago the sun was in the right
position, and how many years it takes for it to get back to that position.
You know the same for the moon. When will you see the next eclipse?
@ Input: The input consists of two lines. The first line contains two integers,
$d_s$ and $y_s$ $(0 \le d_s < y_s \le 50)$, where $d_s$ is how many years
ago the sun was in the right position, and $y_s$ is how many years it takes
for the sun to be back in that position. The second line contains two
integers, $d_m$ and $y_m$ $(0 \le d_m < y_m \le 50)$, where $d_m$ is how
many years ago the moon was in the right position, and $y_m$ is how many
years it takes for the moon to be back in that position.
@ Output: Output a single integer, the number of years until the next eclipse. The
data will be set in such a way that there is not an eclipse happening right
now and there will be an eclipse within the next $5\,000$ years.
==============================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ds, ys, dm, ym;
    cin >> ds >> ys >> dm >> ym;

    ds = ys - ds, dm = ym - dm;

    while (ds != dm) {
      if (ds < dm) ds += ys;
      else dm += ym;
    }
    cout << ds;

    return 0;
}
