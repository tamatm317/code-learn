#include <iostream>
#include <fstream>
#include <vector>
#include <cstdio>
using namespace std;
void input(vector<int> &a, int n)
{
    // freopen("SOCHAN.INP", "r", stdin);
    // cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
}
void output(vector<int> a, int n)
{
    // freopen("SOCHAN.OUT", "w", stdout);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}
void progress(vector<int> a, int n)
{
    // freopen("SOCHAN.OUT", "w", stdout);
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            ++cnt;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    freopen("SOCHAN.INP", "r", stdin);
    freopen("SOCHAN.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> a;
    input(a, n);
    output(a, n);
}