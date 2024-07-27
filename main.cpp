// boj 1202 ���� ����
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> jewel(N);    // ����, ��ġ
    vector<int> bag(K);

    for (int i = 0; i < N; i++)
        cin >> jewel[i].first >> jewel[i].second;

    // ���濡 ���� �� �ִ� ����
    for (int i = 0; i < K; i++)
        cin >> bag[i];

    // ���� ���� �������� ����
    sort(jewel.begin(), jewel.end());   //
    sort(bag.begin(), bag.end());

    // ���濡 ���� �� �ִ� ���԰� ���� �ͺ��� Ȯ��
    priority_queue<int> pq;
    ll ans = 0;
    int idx = 0;
    for (int i = 0; i < K; i++)
    {
        // ���濡 ���� �� �ִ� ���Ժ��� ���� �������� ��� pq�� ����
        while (idx < N && jewel[idx].first <= bag[i])
        {
            pq.push(jewel[idx].second);
            idx++;
        }

        // pq�� �ִ� ������ �� ��ġ�� ���� ū ���� ����
        if (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
    }

    // ���
    cout << ans << endl;
}
