#include <bits/stdc++.h>
using namespace std;
int prime[317];
void sieve(int prime[])
{
    for (int i = 0; i < 317; ++i)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i <=sqrt(317); ++i)
    {
        if (prime[i])
        {
            for (int j = i * i; j < 317; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
void solve()
{
    vector<int> vt;
    for (int i = 2; i < 317; ++i)
    {
        if (prime[i] == 1)
        {
            vt.push_back(i);
        }
    }
    for (int i = 0; i < vt.size(); ++i)
    {
        cout << vt[i] << " ";
    }
}
int main()
{
    // freopen("UOCSO.INP","w", stdin);
    // freopen("UOCSO.OUT","w", stdout);
    solve();
}
