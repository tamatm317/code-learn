#include<iostream>
#include<cmath>
using namespace std;
long long check(long long n){
	n = abs(n);
	while(n>0){
		int temp = n%10;
		if (temp%2==0) return 0;
		n/=10;
	}
	return 1;
}
void input(long long a[], int n){
	int count = 0;
    for(int i = 0; i<n; ++i){
    	cin >> a[i];
    	if(check(a[i]))++count;
    }
    cout << count << endl;
}
void output(long long a[], int n){
	for(int i =0; i<n; ++i){
		if(check(a[i])) cout << a[i] << " ";
	}
}
int main(){
    int n;
    cin >> n;
    long long a[n];
    input(a,n);
    output(a,n);
}