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
    int n;
    cin >> n;
    vector<int> a;
    input(a, n);
    sort(a.begin(), a.end());
    int min = 1e9;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] - a[i - 1] < min)
        {
            min = a[i] - a[i - 1];
        }
    }
    cout << min;
}