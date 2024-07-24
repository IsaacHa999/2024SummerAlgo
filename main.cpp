// boj 1439 ������
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    // �����ϰ� �����ϸ� 0�� 1�� ���ӵ� ������ ������ ���� �ȴ�.
    vector<int> simple;

    int before = s[0] - '0';
    simple.push_back(before);

    for (int i = 0; i < s.size(); i++) {
        int num = s[i] - '0';

        if (before != num) {
            simple.push_back(num);
            before = num;
        }
    }

    // // debug code : simple �迭 ���
    // for (int i = 0; i < simple.size(); i++) {
    //     cout << simple[i] << " ";
    // }
    // cout << endl;

    // 0�� 1�� �ٲ�� ������ ���ٸ�
    if (simple.size() == 0) {
        cout << 0 << endl;
        return 0;
    }

    // 0�� 1�� �ٲ�� ������ �ִٸ�, �� ���� ������ ���
    int cnt = 0;
    for (int i = 0; i < simple.size(); i++) {
        if (simple[i] == 0) {
            cnt++;
        }
    }
    //
    if (cnt > simple.size() - cnt) {
        cout << simple.size() - cnt << endl;
    } else {
        cout << cnt << endl;
    }
}
