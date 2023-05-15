#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
	string n;
	getline(cin, n);
	for (int i = 0; i < n.size(); ++i)
	{
		n[i] = tolower(n[i]);
	}
	vector<string> vt;
	map<string, int> mp;
	stringstream ss(n);
	string word;
	int p = 0;
	while (ss >> word)
	{
		vt.push_back(word);
		mp[vt[p++]]++;
	}
	int max = 0;
	string tmp;
	for (auto i : mp)
	{
		if (i.second > max)
		{
			max = i.second;
			tmp = i.first;
		}
	}
	cout << tmp << " " << max;
	return 0;
}
// #include <iostream>
// #include <string>
// #include<map>
// #include<sstream>
// #include<vector>
// using namespace std;
// int main()
// {
//     map<string,int> mp;
//     string n;
//     getline(cin, n);
//     for(int i = 0; i<n.size();++i){
//         n[i] = tolower(n[i]);
//     }
//     stringstream ss(n);
//     string word;
//     vector<string> vt;
//     int i = 0;
//     while(ss>>word){
//         vt.push_back(word);
//         mp[vt[i++]]++;
//     }
//     string tmp;
//     int max= 0;
//     for(int i = 0; i<vt.size();++i){
// 		if(mp[vt[i]]>max){
// 			max = mp[vt[i]];
// 			tmp = vt[i];
// 		}
// 	}
// 	// for(auto i: mp){
// 	// 	cout << i.first << " " << i.second << endl;
// 	// }
// 	cout << tmp << " " << max ;
// }