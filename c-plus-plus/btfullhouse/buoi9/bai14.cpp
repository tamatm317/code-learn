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
int progress(vector<int> a, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0)
            break;
        else
        {
            for (int j = i + 1; j < n; ++j)
            {
                a[j] -= 1;
            }
        }
        cnt += a[i];
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    input(a, n);
    sort(a.begin(), a.end(), greater<int>());
    cout << progress(a, n);
}