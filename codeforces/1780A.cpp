#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int check = 1;
    int i1, i2, i3;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    // int k = sizeof(a) / a[0];
    // sort(a, a + k);
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 1)
        {
            check = 0;
            break;
        }
    }
    if (check == 1)
    {
        cout << "NO";
    }
    else
    {
        int kt = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if ((a[i] + a[j] + a[k]) % 2 == 1)
                    {
                        kt = 1;
                        i1 = i + 1, i2 = j + 1, i3 = k + 1;
                        break;
                    }
                }
            }
        }
        if (kt == 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << endl;
            cout << i1 << " " << i2 << " " << i3;
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