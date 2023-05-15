#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m, n;
    cin >> m >> n;
    vector<string> vt;
    for (int i = 0; i < m; ++i)
    {
        string temp;
        cin >> temp;
        vt.push_back(temp);
    }
    //    for (int i = 0; i < m; ++i)
    //    {
    //        cout << vt[i] << endl;
    //    }
    char a[m][n + 1];
    for (int i = 0; i < n; ++i)
    {
        strcpy(a[i], vt[i].c_str());
    }
    int cnt = 0;
    for (int i = 0; i < m - 1; ++i)
    {
        int j = 0;
        int temp = a[i][j];
        while (j <= n - 1)
        {
            if (temp != a[i][j + 1])
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if (temp == a[k][j + 1])
                    {
                        ++cnt;
                    }
                }
                ++j;
            }
            else
                ++j;
        }
    }
    cout << cnt;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve();
    }
}
