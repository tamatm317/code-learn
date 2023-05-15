#include<iostream>
#include<cstring>
using namespace std;
int check[1000001] = {0};
void input(int a[], int n, int check[]){
	for(int i=0; i<n;++i){
		cin >> a[i];
	}
}
void output(int a[], int n , int check[]){
	int count = 0;
	for(int i = 0; i<n;++i){
		if(check[a[i]]==1){
			cout << a[i] << endl;
			count = 1;
			break;
		}
		check[a[i]] = 1;
	}
	if(count == 0) cout << -1 << endl;
}
int main(){
	int tc;
	cin >> tc;
	for(int i=0; i<tc;++i){
		int n;
		cin >> n;
		int a[n];
		input(a,n,check);
		output(a,n,check);
		memset(check,0,sizeof(check));
	}
}