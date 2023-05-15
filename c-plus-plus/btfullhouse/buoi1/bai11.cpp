#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n;
	cin >> n; 	
	long long s =0;
	for(long long
	 i =1; i<=n; ++i){
		s+=i*2;
	}
	cout << s;
}