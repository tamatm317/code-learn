#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void input(vector<int> &a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        input(a, n);
        int cnt = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i] + a[j] > k)
                    ++cnt;
            }
        }
        cout << cnt << endl;
    }
}