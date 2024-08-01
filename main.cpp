// boj 14888 ������ �����ֱ�
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// �Լ� ����
void dfs(int idx, int val, vector<int> &A, vector<int> &op, int N); // idx: ���� �ε���, val: ��������� ��갪, A: ���� �迭, op: ������ �迭, N: ���� ����

int max_val = INT_MIN;
int min_val = INT_MAX;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    vector<int> op(4);
    for (int i = 0; i < 4; i++)
        cin >> op[i];

    // dfs
    dfs(1, A[0], A, op, N); // idx: 1, val: A[0], A: A, op: op, N: N

    // ��� ���
    cout << max_val << endl;
    cout << min_val << endl;


}

void dfs(int idx, int val, vector<int> &A, vector<int> &op, int N)
{
    if (idx == N)
    {
        max_val = max(max_val, val);
        min_val = min(min_val, val);
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (op[i] > 0)
        {
            op[i]--;
            if (i == 0)
                dfs(idx + 1, val + A[idx], A, op, N);
            else if (i == 1)
                dfs(idx + 1, val - A[idx], A, op, N);
            else if (i == 2)
                dfs(idx + 1, val * A[idx], A, op, N);
            else
                dfs(idx + 1, val / A[idx], A, op, N);
            op[i]++;
        }
    }
}
