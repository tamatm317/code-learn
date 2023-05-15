#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void progress(vector<int> &a, int n)
{
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        a.push_back(x);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    progress(v, n);
    sort(v.begin(), v.end(), greater<int>());
    if (v[0] == 0)
    {
        cout << 1;
    }
    else if (v[0] > n)
    {
        cout << n;
    }
    else
    {
        cout << v[0];
    }
}