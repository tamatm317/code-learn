#include<iostream>
using namespace std;
#define ll long long
int main(){
	long long a,b;
	cin >> a >> b;
	if(b==0) cout << 0 << " " << 0;
	else{
		ll nguyen = a/b;
		ll du = a%b;
		cout << nguyen << " " << du;
	}
}