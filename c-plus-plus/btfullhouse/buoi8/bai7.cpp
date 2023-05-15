#include <sstream>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
void chuanhoa(vector<string> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i][0] >= 'a' && v[i][0] <= 'z')
		{
			v[i][0] = toupper(v[i][0]);
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
void output(string s)
{
	for (int i = 0; i < s.size(); ++i)
	{
		s[i] = tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string temp;
	while (ss >> temp)
		v.push_back(temp);
	chuanhoa(v);
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		output(s);
	}
}