#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void input(vector<int> &a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
}
void progress(vector<int> a, int n, int k)
{
    int b[n];
    for (int i = 0; i < a.size(); ++i)
    {
        b[i] = abs(k - a[i]);
    }
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (b[i] > b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
        progress(a, n, k);
    }
}