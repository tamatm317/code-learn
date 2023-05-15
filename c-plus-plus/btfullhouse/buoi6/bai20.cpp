#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int count = n * n;
    for (int i = 0; i <= n / 2; ++i)
    {
        for (int j = i; j < n - i; ++j)
        {
            a[i][j] = count--;
        }
        for (int j = i + 1; j < n - i; ++j)
        {
            a[j][n - i - 1] = count--;
        }
        for (int j = n - i - 2; j >= i; --j)
        {
            a[n - i - 1][j] = count--;
        }
        for (int j = n - i - 2; j > i; --j)
        {
            a[j][i] = count--;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}