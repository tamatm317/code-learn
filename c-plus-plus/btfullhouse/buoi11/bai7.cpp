#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    queue<int> qe;
    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int x;
            cin >> x;
            qe.push(x);
        }
        else if (s == "POP")
        {
            if (!qe.empty())
            {
                qe.pop();
            }
            else
            {
                continue;
            }
        }
        else if (s == "PRINTFRONT")
        {
            if (!qe.empty())
            {
                cout << qe.front() << endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
    }
}
int main()
{
    solve();
}