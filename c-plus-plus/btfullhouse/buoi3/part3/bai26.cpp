#include<iostream>
#define ll long long 
using namespace std;
void count(ll n){
	int c2 = 0,c3=0,c5=0,c7=0;
	while(n>0){
		int temp=n%10;
		if(temp==2)++c2;
		else if(temp==3)++c3;
		else if(temp==5)++c5;
		else if(temp==7)++c7;
		n/=10;
	}
	if(c2!=0)cout << 2 << " " << c2 << endl;
	if(c3!=0)cout << 3 << " " << c3 << endl;
	if(c5!=0)cout << 5 << " " << c5 << endl;
	if(c7!=0)cout << 7 << " " << c7 << endl;
}
int main(){
	ll n;
	cin >> n;
	count(n);
}