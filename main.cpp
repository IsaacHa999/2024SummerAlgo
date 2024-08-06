// boj 3986 ���� �ܾ�
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

    int N;
    cin >> N;
    int ans = 0;

    //
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        stack<char> st;
        for (int j = 0; j < s.size(); j++) {
            if (st.empty()) {
                st.push(s[j]);
            }
            else {
                if (st.top() == s[j]) {
                    st.pop();
                }
                else {
                    st.push(s[j]);
                }
            }
        }

        // // debug
        // while (!s.empty())
        //     cout << st.top() << " ";

        // ������ ��������� ���� �ܾ�
        if (st.empty())
            ans++;
    }

    cout << ans << endl;
}

// �Լ� ����