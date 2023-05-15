// ngttam
#include <bits/stdc++.h>
using namespace std;
const long long tmp = 20222023;
void solve()
{
    int row, col, k;
    cin >> row >> col >> k;
    long long sum = 0;
    for (int i = row; i <= row + k - 1; ++i)
    {
        double temp = (k / 2.0) * (((2 * (i % tmp) * (col & tmp)) % tmp) + ((k - 1) * i) % tmp);

        long long val = temp;
        sum += val % tmp;
    }
    cout << sum;
}
int main()
{
    freopen("HVUONG.INP", "r", stdin);
    freopen("HVUONG.OUT", "w", stdout);
    solve();
}
