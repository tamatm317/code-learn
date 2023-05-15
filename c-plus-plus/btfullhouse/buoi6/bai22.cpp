#include <iostream>
using namespace std;
int fibo[100];
void fibonacci()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 100; ++i)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
int main()
{
    fibonacci();
    int n;
    cin >> n;
    int a[n][n];
    int x = -1;
    for (long long i = 0; i <= n / 2; ++i)
    {
        for (long long j = i; j < n - i - 1; ++j)
        {
            ++x;
            a[i][j] = fibo[x];
        }
        for (long long j = i; j < n - i; ++j)
        {
            ++x;
            a[j][n - i - 1] = fibo[x];
        }
        for (long long j = n - i - 2; j >= i; --j)
        {
            ++x;
            a[n - i - 1][j] = fibo[x];
        }
        for (long long j = n - i - 2; j > i; --j)
        {
            ++x;
            a[j][i] = fibo[x];
        }
    }
    for (long long i = 0; i < n; ++i)
    {
        for (long long j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}