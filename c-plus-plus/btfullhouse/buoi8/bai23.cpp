#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	string str = "";
	long long max1 = 0;
	long long sum = 0;
	for (int i = 0; i <= (int)s.length(); ++i)
	{
		if (isdigit(s[i]))
		{
			str.push_back(s[i]);
		}
		else
		{
			if (str != "")
			{
				sum = stoll(str);
				max1 = max(sum, max1);
				str = "";
			}
		}
	}
	cout << max1 << endl;
}
int main()
{
	solve();
}
