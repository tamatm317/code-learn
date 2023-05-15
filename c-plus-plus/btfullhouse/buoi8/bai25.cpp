#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int max(int &a, int &b)
{
    return a > b ? a : b;
}
void solve()
{
    string s;
    cin >> s;
    int lis[s.size()];
    for (int i = 0; i < s.size(); ++i)
    {
        lis[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (s[i] > s[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }
    int res = 0;
    // cout << sizeof(lis);
    // for (int i = 0; i < s.size(); ++i)
    // {
    //     cout << lis[i] << " ";
    // }
    for (int i = 0; i < s.size(); ++i)
    {
        if (lis[i] > res)
        {
            res = lis[i];
        }
    }
    cout << 26 - res;
}
int main()
{
    solve();
}