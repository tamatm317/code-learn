#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> x;
        b.push_back(x);
    }
    vector<pair<int, int>> vt;
    for (int i = 0; i < a.size(); ++i)
    {
        vt.push_back({a[i], b[i]});
    }
    for (int i = 0; i < vt.size(); i++)
    {
        cout << vt[i].first << " " << vt[i].second << " ";
    }
    sort(vt.begin(), vt.end());
    int j = 0, cnt = 1;
    for (int i = 1; i < vt.size(); i++)
    {
        if (vt[i].first >= vt[j].second)
        {
            ++cnt;
            j = i;
        }
    }
    cout << cnt;
}