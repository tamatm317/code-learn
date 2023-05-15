#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string temp;
	while (ss >> temp)
	{
		v.push_back(temp);
	}
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] > v[j])
			{
				string tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
}