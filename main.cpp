// boj 2891 ī��� ��ǳ
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int S, R;
    cin >> S >> R;

    vector<int> team(N+1,1);    // ī���� ����
    team[0] = -1;

    for (int i = 0; i < S; i++) {
        int num;
        cin >> num;
        team[num] = 0;
    }

    for (int i = 0; i < R; i++) {
        int num;
        cin >> num;
        team[num]++;
    }

    // ī���� ������ ���� ã�Ƽ� ī���� �����ش�.
    for (int i = 1; i <= N; i++) {
        if (team[i] == 0) {
            if (team[i - 1] == 2) {
                team[i - 1]--;
                team[i]++;
            }
            else if (team[i + 1] == 2) {
                team[i + 1]--;
                team[i]++;
            }
        }
    }

    // team �� 0�� ������ ���
    int count_team = 0;
    for (int i = 1; i <= N; i++) {
        if (team[i] == 0) count_team++;
    }
    cout << count_team << endl;
}
