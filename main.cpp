// boj 1929 �Ҽ� ���ϱ�
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    vector<int> prime(N + 1, 1);
    prime[0] = prime[1] = 0;

    // �����佺�׳׽��� ü
    for (int i = 2; i <= N; i++)
    {
        if (prime[i] == 0)  // �Ҽ��� �ƴ�
            continue;
        for (int j = i * 2; j <= N; j += i)
            prime[j] = 0;
    }

    // �Ҽ� ���
    for (int i = M; i <= N; i++)
    {
        if (prime[i] == 1)
            cout << i << endl;
    }
}