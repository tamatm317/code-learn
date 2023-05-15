#include<iostream>
using namespace std;
int main(){
	int n ,x, check = 0;
	cin >> n >> x;
	int a[n];
	for(int i= 0; i<n; ++i){
		cin >> a[i];
	}
	for(int i = 0; i<n; ++i){
		if(a[i]==x){
			check = 1;
			break;
		}
	}
	if(check==1) cout << 1;
	else cout << 0;
}