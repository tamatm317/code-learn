#include<iostream>
using namespace std;
int check[1000001] = {0};
void input(int a[], int n, int check[]){
	for(int i=0; i<n;++i){
		cin >> a[i];
		++check[a[i]];
	}
}
void output(int a[], int n , int check[]){
	int cnt = 0, num = 0;
	for(int i = 0; i<n;++i){
		if(check[a[i]]>cnt){
			cnt = check[a[i]];
			num = a[i];
		}
		else if (check[a[i]]==cnt){
			if(num>a[i]) num = a[i];
		}
	}
	cout << num << " " << cnt;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	input(a,n,check);
	output(a,n,check);
}