#include<iostream>
#include<cstdio>
using namespace std;
int min(int &a, int &b){
	return a<b?a:b;
}
int main(){
	freopen("CASTING.INP","r",stdin);
	freopen("CASTING.OUT","w",stdout);
	int t; cin >> t;
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	if(t==1){
		cout << min(min(a,b),c);
	}
	else{
		
	}
}