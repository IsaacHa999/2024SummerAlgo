// boj 1138 �� �ٷ� ����
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
    vector<int> arr(N);
    vector<int> ans(N,-1);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    // arr[i] + 1 ��° -1��ġ�� i+1�� �ִ´�.
    for (int i = 0; i < N; i++) {
        int pos = arr[i] + 1;   // ex) pos = 2 + 1 = 3
        // -1�� pos ��° ������ ��ġ�� i+1�� �ִ´�.
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (ans[j] == -1) {
                count++;
                if (count == pos) {
                    ans[j] = i+1;
                    break;
                }
            }
        }
    }

    // ���
    for (int i = 0; i < N; i++)
        cout << ans[i] << " ";
}
