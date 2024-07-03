// boj 4949 �������� ����
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool flag = true;

    // ���� �ϳ��� �Է¹��� ������ ��� �Է¹ޱ�
    while (true)
    {
        string str;
        getline(cin, str);

        if (str == ".")
            break;

        stack<char> s;
        flag = true;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' || str[i] == '[')
                s.push(str[i]);
            else if (str[i] == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    flag = false;
                    break;
                }
                s.pop();
            }
            else if (str[i] == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    flag = false;
                    break;
                }
                s.pop();
            }
        }

        if (flag && s.empty())
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}