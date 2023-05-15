#include <isotream>
using namespace std;
long long fibo(int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	long long f1 = 1;
	long long f2 = 1;
	long long fn = 0;
	for (int i = 3; i <= n; i++)
	{
		fn = f1 + f2;

		f1 = f2;
		f2 = fn;
	}
	return fn;
}
int main()
{
	long long n;
	cin >> n;
	long long x = -1;
	long long a[n][n];
	// fibo
	// long long f0 = 0, f1=1, fibo = 0;
	// for(long long i = 1; i<=n; ++i){
	// 	if(i==1) cout << 0 << " ";
	// 	if(i==2) cout << 1 << " ";
	// 	f0 = f1;
	// 	f1 = fibo;
	// 	fibo = f0+f1;
	// 	cout << fibo << " ";
	// }
	for (long long i = 0; i <= n / 2; ++i)
	{
		for (long long j = i; j < n - i - 1; ++j)
		{
			++x;
			a[i][j] = fibo(x);
		}
		for (long long j = i; j < n - i; ++j)
		{
			++x;
			a[j][n - i - 1] = fibo(x);
		}
		for (long long j = n - i - 2; j >= i; --j)
		{
			++x;
			a[n - i - 1][j] = fibo(x);
		}
		for (long long j = n - i - 2; j > i; --j)
		{
			++x;
			a[j][i] = fibo(x);
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