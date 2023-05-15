#include<iostream>
#include <cstring>
using namespace std;
int p[30000];
// memset(b, 0, 30000*sizeof(int))
void input(int a[], int n){
	for(int i =0; i<n;++i){
		cin >> a[i];
		++p[a[i]];
	}
}
void output(int a[], int n, int p[]){
	int max = 1, cnt = 0;
	int temp[n];
	for(int i =0; i<n;++i){
		if(p[a[i]]>max){
			max = p[a[i]];
		}
	}
	for(int i =0; i<n;++i){
		if(p[a[i]]==max && p[a[i]]!=0){
			temp[cnt++] = a[i];
			p[a[i]] = 0;
		}
	}
	for(int i = 0; i<cnt;++i){
		cout << temp[i] << " ";
	}
}
int main(){
	int testcase;
	cin >> testcase;
	for(int i = 1; i<=testcase;++i){
		memset(p, 0, 30000*sizeof(int));
		int n;
		cin >> n;
		int a[n];
		input(a,n);
		output(a,n,p);
		cout << endl;
	}

}