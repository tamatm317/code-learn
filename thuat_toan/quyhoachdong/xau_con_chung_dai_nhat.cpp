#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    int m = a.size();
    int n = b.size();
    int lcs[m + 1][n + 1];
    for (int i = 0; i <= m; ++i)
    {
        lcs[i][0] = 0;
    }
    for (int i = 0; i <= n; ++i)
    {
        lcs[0][i] = 0;
    }
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (a[i - 1] == b[j - 1])
            {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            }
            else
            {
                if (lcs[i - 1][j] >= lcs[i][j - 1])
                    lcs[i][j] = lcs[i - 1][j];
                else
                    lcs[i][j] = lcs[i][j - 1];
            }
            // cout << lcs[i][j] << " ";
        }

        // cout << endl;
    }
    string res = "";
    int i = m;
    int j = n;
    while (i >= 1 && j >= 1)
    {
        if (a[i - 1] == b[j - 1])
        {
            // cout << a[i - 1];
            res += a[i - 1];
            j -= 1;
            --i;
        }
        else
        {
            if (lcs[i][j - 1] >= lcs[i - 1][j])
            {
                j -= 1;
            }
            else
                i -= 1;
        }
    }
    // for (int i = 0; i < res.size(); ++i)
    // {
    //     cout << res[i];
    // }
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }
    // cout << lcs[m][n];
}
int main()
{
    solve();
}