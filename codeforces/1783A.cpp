#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    bool check = true;
    int a[n];
    int ans[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i)
    {
        if (a[i] != a[i - 1])
        {
            check = false;
        }
    }
    int k = sizeof(a) / sizeof(a[0]);
    sort(a, a + k);
    if (check == true)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        int idx = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            ans[idx++] = a[i];
        }
        if (ans[0] == ans[1])
        {
            int temp = ans[1];
            ans[1] = ans[n - 1];
            ans[n - 1] = temp;
        }
        for (int i = 0; i < n; ++i)
        {
            cout << ans[i] << " ";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}