#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < n / 2; ++i)
    {
        sum += abs(a[i] - a[n - i - 1]);
    }
    cout << sum * 2;
}
int main()
{
    solve();
}