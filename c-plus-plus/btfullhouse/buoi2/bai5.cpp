#include<iostream>
using namespace std;
void check(int n){
	int test = 0;
	for(int i = 1; i<=n;++i){
		int t;
		cin >>t;
		if(t==2021){
			test = 1;
		}
	}
	if(test==1) cout << "YES";
	else cout << "NO";
}
int main(){
	int n;
	cin >> n;
	check(n);
}