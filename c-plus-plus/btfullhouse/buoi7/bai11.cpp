#include<iostream>
#include<cstring>
using namespace std;
int doixung(char n[]){
	int x = strlen(n);
	for(int i =0; i<x/2;++i){
		if(n[i]!=n[x-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char n[1000];
	cin >> n;
	if(doixung(n)==1) cout << "YES";
	else cout << "NO";
}