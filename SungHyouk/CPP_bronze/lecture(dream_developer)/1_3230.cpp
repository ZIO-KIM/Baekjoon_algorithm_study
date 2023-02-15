#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct man_t
{
    int id;  // 몇 번 선수인가?
    int rank;  // 랭킹
};

bool compare(man_t left, man_t right)
{
    return left.rank <= right.rank;
}

void makeRank(man_t* man, int sz)
{
    // 랭킹 정보 초기화
    for (int i = 0; i < sz; i++)
        man[i].rank = 0;

    for (int i = 0; i < sz; i++)
    {
        // 랭킹 정보를 받음
        int myrank;
        cin >> man[i].rank;

        // 본인과 같거나 큰 랭크들은 하나씩 밀린다.
        for (int j = 0; j < sz; j++)
        {
            // 본인이면 패스
            if (man[i].id == man[j].id) continue;
            else if (man[i].rank <= man[j].rank)
            {
                man[j].rank++;
            }
        }
    }
}

int main()
{
    // 1. N, M을 입력 받기
    struct man_t man[100];

    // 각 선수들의 랭킹을 구해야 한다.
    // 정렬을 할 때 어떤 선수의 랭킹이었는지 이 정보가 같이 기록되어야 한다.
    // 구조체로 같이 관리하는 것이 좋다.
    int M, N;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        man[i].id = i + 1;

    // 첫 번째 경기
    // 각 선수가 경기 진행할 때 랭킹이 주어진다.
    // 본인이 현재 랭킹보다 같거나 큰 랭킹을 하나씩 받는다.
    // 즉, 1, 2등 하던 선수가 있었는데 새로운 선수가 1등을 하면 기존 선수는 2, 3등으로 밀려난다.
    // 라운드가 2번이므로 랭킹을 주는 방법은 같으므로 함수로 작성
    makeRank(man, N); // 1번째 경기 끝
    sort(man, man + N, compare);  // 1등까지 N등까지 오름차순 정렬
    reverse(man, man + M);  // M등부터 1등까지 순서로 시작해야 하므로
    makeRank(man, M);  // 2번째 경기
    sort(man, man + M, compare);  // 금/은/동 순으로 정렬

    for (int i = 0; i < 3; i++)
    {
        cout << man[i].id << endl;
    }
    return 0;
}