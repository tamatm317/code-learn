#include <iostream>
#include <cmath>
using namespace std;
int nt(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int p[100];
void prime()
{
    int i = 1;
    int cnt = 0;
    while (cnt < 100)
    {
        if (nt(i))
        {
            p[cnt] = i;
            ++cnt;
        }
        ++i;
    }
}
int main()
{
    prime();
    int n;
    cin >> n;
    int a[n][n];
    int count = 0;
    for (int i = 0; i <= n / 2; ++i)
    {
        for (int j = i; j < n - i; ++j)
        {
            a[i][j] = p[count];
            ++count;
        }
        for (int j = i + 1; j < n - i; ++j)
        {
            a[j][n - i - 1] = p[count];
            ++count;
        }
        for (int j = n - i - 2; j >= i; --j)
        {
            a[n - i - 1][j] = p[count];
            ++count;
        }
        for (int j = n - i - 2; j > i; --j)
        {
            a[j][i] = p[count];
            ++count;
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