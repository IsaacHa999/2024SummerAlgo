// boj 14425 ���ڿ� ����
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// �Լ� ����

// ���� ����

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // �Է�
    int N, M;
    cin >> N >> M;
    set<string> S;  // ���ڿ� ����

    // ���ڿ� ���� S�� ���ڿ� �Է�
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        S.insert(str);
    }

    // ���ڿ� ���� S�� ���ڿ��� �ִ��� Ȯ��
    int cnt = 0;
    for (int i = 0; i < M; i++) {
        string str;
        cin >> str;
        if (S.find(str) != S.end()) cnt++;  // ���ڿ��� ������ cnt ����
    }

    cout << cnt << endl;
}

