#include<iostream>
using namespace std;
int check(long long n){
	long long res = n;
	int c1 = 0, c9 = 0;
	while(res>0){
		int temp=res%10;
		if(temp==1)++c1;
		else if(temp==9)++c9;
		res/=10;
	}
	if(c1>=1&&c9>=1) return 1;
	else return 0;
}
void input(long long a[], int n){
	for(int i =0; i<n; ++i)cin >> a[i];
}
void include_1_2(long long a[], int n){
	for(int i =0; i<n;++i){
		if(check(a[i]))cout << a[i] << " ";
	}
}
int main(){
	int n;
	cin >> n;
	long long a[n];
	input(a,n);
	include_1_2(a,n);
}