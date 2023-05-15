#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void input(vector<long long> &a, int n)
{
    long long x;
    for (int i = 0; i < n; ++i)
    {
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
        int n, m;
        cin >> n >> m;
        vector<long long> a;
        vector<long long> b;
        input(a, n);
        input(b, m);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << a[n - 1] * b[0] * 1ll;
        cout << endl;
    }
}