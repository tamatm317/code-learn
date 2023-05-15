#include <iostream>
#include <algorithm>
#include <vector>
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
int progress(vector<int> a, int n)
{
    int cnt1 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 1)
            ++cnt1;
    }
    return (n - (cnt1) / 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        input(a, n);
        sort(a.begin(), a.end());
        cout << progress(a, n) << endl;
    }
    return 0;
}