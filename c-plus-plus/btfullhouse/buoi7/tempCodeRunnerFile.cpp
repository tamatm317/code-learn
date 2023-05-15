#include <iostream>
#include <cstring>
#include <set>
using namespace std;
// int pangam(char a[]){
// 	int cnt[26] = {0}; // đánh dấu xâu ban đầu là 0
// 	for(int i= 0; i<strlen(a);++i){
// 		cnt[a[i] - 'a'] = 1;// đánh dấu các chữ xuất hiện là 1
// 	}
// 	for(int i=0; i<26; ++i){
// 		if(cnt[i]==0)return 0;
// 	}
// 	return 1;
// }
int main()
{
	string s;
	cin >> s;
	set<char> a;
	for (auto i : s)
	{
		a.insert(i);
	}
	if (s.size() == 26)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}