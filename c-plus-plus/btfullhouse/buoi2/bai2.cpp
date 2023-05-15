#include<iostream>
using namespace std;
void count(int n){
	int count = 0;
	for(int i = 1; i<=n/2; ++i){
		if(n%i==0) ++count;
	}
	cout << count+1 << endl;
	for(int i = 1; i<=n/2; ++i){
		if(n%i==0) cout << i << " ";
	}
	cout << n;
}
int main(){
	int n;
	cin >> n;
	count(n);
	return 0;
}