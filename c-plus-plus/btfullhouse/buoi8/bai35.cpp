#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
void solve()
{
	string de101 = "ABBADCCABDCCABD";
	string de102 = " ACCABCDDBBCDDBB";
	int n;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		int cnt = 0;
		string a;
		getline(cin, a);
		for (int i = 0; i < a.size(); ++i)
		{
			if (a[i] == ' ')
			{
				a.erase(a.begin() + i);
			}
		}
		if (a[2] == '1')
		{
			a.erase(a.begin() + 0, a.begin() + 3);
			for (int i = 0; i < a.size(); ++i)
			{
				if (a[i] == de101[i])
				{
					++cnt;
				}
			}
		}
		else
		{
			a.erase(a.begin() + 0, a.begin() + 3);
			for (int i = 0; i < a.size(); ++i)
			{
				if (a[i] == de102[i])
				{
					++cnt;
				}
			}
		}
		float total = 1.0 * (float)2 / 3 * cnt;
		cout << setprecision(2) << fixed << total << endl;
	}
}
int main()
{
	solve();
}