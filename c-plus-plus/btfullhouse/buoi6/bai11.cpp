#include<iostream>
#include<cmath>
using namespace std;
int prime(int n){
	for(int i = 2; i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}
	return n>1;
}
int p[10000];
void sieve(){
	for(int i = 0; i<10000;++i)p[i] = 1;
	p[0] = 0, p[1] = 0;
	for(int i = 2; i<100;++i){
		for(int j = i*i; j<10000;j+=i){
			p[j] = 0;
		}
	}	
}
void input(int **a, int x){
	for(int i = 0; i<x;++i){
		for(int j = 0; j<x;++j){
			cin >> a[i][j];
		}
	}
}
void output(int **a, int x){
	sieve();
	int cnt = 0;
	for(int i = 0; i<x;++i){
		if(p[a[i][i]]){
			++cnt;
			p[a[i][i]] =0;
		}
		if(p[a[i][x-i-1]]){
			++cnt;
			p[a[i][x-i-1]]=0;
		}
	}
	cout << cnt;
}
int main(){
	int x;
	cin >> x;
	int **a = new int *[x];
	for(int i = 0; i<x; ++i){
		a[i] = new int [x];
	}
	input(a,x);
	output(a,x);
	for(int i= 0; i<x; ++i){
		delete a[i];
	}
	delete[]a;
	return 0;
}