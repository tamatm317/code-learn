#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void input(vector<int> &v, int n)
{
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        input(v, n);
        sort(v.begin(), v.end());
        for (int i = 0; i < n; ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}