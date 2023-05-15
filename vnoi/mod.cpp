#include <bits/stdc++.h>
using namespace std;
long long sqr(long long x)
{
    return x * x;
}
long long mod(long long a, long long b, long long MOD)
{
    if (b == 0)
        return 1 % MOD;
    else
    {
        if (b % 2 == 0)
        {
            return sqr(mod(a, b / 2, MOD) % MOD);
        }
        else
        {
            return 2 * (mod(a, b / 2, MOD) % MOD) % MOD;
        }
    }
}
void solve()
{
    long long a, b, MOD;
    cin >> a >> b >> MOD;
    cout << mod(a, b, MOD);
}
int main()
{
    solve();
}