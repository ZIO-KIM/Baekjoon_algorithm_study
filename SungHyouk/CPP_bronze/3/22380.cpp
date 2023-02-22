/*
==============================================================================================
@ Title: 割り勘
@ URL: https://www.acmicpc.net/problem/22380
@ Author: Sunghyouk Choi
@ Created Date: 2023. 2. 22. 오후 1:17:06
@ Level: Bronze 3
@ Tags: arithmetic implementation math
@ Description:
あなたは ICPC 2019 Yokohama Regional 国内予選の健闘を祈るためのパーティを企画した．このパーティの参加者は N 人である．
このパーティの開催には合計で M 円の費用が必要となるため，N 人の参加者からそれぞれ M/N 円を集めることにした．M は N で割り切れる金額となったため，余りについて心配する必要はない．
i 番目の参加者の今日の所持金は Ai 円である．M/N 円を払うことができない場合には，今日の所持金をすべて払ってもらい，足りない分は後日払ってもらうこととする．
あなたは今日のうちにパーティの開催費用をいくら集めることができるだろうか？
@ Input: 入力は最大で 50 個のデータセットからなる． 各データセットは次の形式で表される． N M A1 A2 ... AN データセットは 2
行からなる．1 行目にはパーティの参加者の数 N と，かかった費用 M が与えられる．N と M は整数であり，それぞれ 2 ≤ N ≤ 100，N
≤ M ≤ 10 000 が成り立つ．また，M は N の倍数である．2
行目には N 人の参加者のそれぞれの所持金が与えられる．Ai は i 番目の参加者の所持金を表す整数であり，1 ≤ Ai ≤ 10 000 である．
入力の終わりは，2 個の 0 だけからなる行で表される．
@ Output: 各データセットについて，今日のうちに集めることができるパーティの開催費用を 1 行で出力せよ．
==============================================================================================
*/
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int N=-1, M=-1;
        cin >> N >> M;
        int money[101];
        int result = 0;
        for (int i=0; i<N; i++) {
            cin >> money[i];
            if (money[i] >= M/N)
                result += M/N;
            else
                result += money[i];
        }
        if (N==0 && M==0) break;
        cout << result << "\n";
    }
    
    return 0;
}
