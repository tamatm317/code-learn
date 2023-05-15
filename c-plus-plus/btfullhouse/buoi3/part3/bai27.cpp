
#include<iostream>
using namespace std;
#define ll long long
// cach 1
ll rev(ll n){
	ll res = 0;
	while(n>0){
		res =res*10+n%10;
		n/=10;
	}
	return res;
}
void element_prime(ll n){
	int c2 =0,c3=0,c5=0,c7=0;
	ll m = rev(n);
	while(n>0){
		int res = n%10;
		if(res==2)++c2;
		else if(res==3)++c3;
		else if(res==5)++c5;
		else if(res==7)++c7;
		n/=10;
	}
	while(m>0){
		int res = m%10;
		if(res==2&&c2!=0){
			cout <<  "2 "<<c2 << endl; c2=0;
		}
		else if(res==3&&c3!=0){
			cout << "3 " << c3 << endl; c3=0;
		}
		else if(res==5&&c5!=0){
			cout << "5 "<<c5 << endl; c5=0;
		}
		else if(res==7&&c7!=0){
			cout << "7 " <<c7 << endl; c7=0;
		}
		m/=10;
	}
}
int main(){
	long long n;
	cin >> n;
	// cout << rev(n);
	element_prime(n);
}