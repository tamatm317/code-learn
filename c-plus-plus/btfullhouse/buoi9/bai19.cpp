#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void input(int a[], int n)
{
    int x;
    for (int i = 0; i < n; ++i)
    {
        // cin >> x;
        // a.push_back(x);
        cin >> a[i];
    }
}
// void progress(vector<int> a, int n)
// {
//     vector<int> b;

// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int c[n];
        input(a, n);
        for (int i = 0; i < n; ++i)
        {
            b[i] = a[i];
            c[i] = a[i];
        }
        sort(b, b + n);
        sort(c, c + n, greater<int>());
        for (int i = 0; i < n / 2; ++i)
        {
            cout << c[i] << " " << b[i] << " ";
        }
        if (c[n / 2] == b[n / 2])
        {
            cout << c[n / 2];
        }
        cout << endl;
        // if ()
    }
}