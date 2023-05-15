#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	map<char, int> mpa;
	map<char, int> mpb;
	for(int i = 0; i<a.size();++i){
		++mpa[a[i]];
	}
	for(int i = 0; i<b.size();++i){
		++mpb[b[i]];
	}
	string c;
	int n= 0;
	for(auto x: mpa){
		int check = 1;
		for(auto y: mpb){
			if(x.first == y.first){
				check = 0;
			}
		}
		if(check == 1) cout << x.first;
	}
}