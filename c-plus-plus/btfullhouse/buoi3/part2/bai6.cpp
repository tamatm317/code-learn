#include<iostream>
#include<cmath>
using namespace std;
int sphenic(int n){
	int num = 0;
	for(int i = 2; i<=sqrt(n);++i){
		int count = 0;
		while(n%i==0){
			n/=i;
			++count;
		}
		if(count>=2) return 0;
		if (count ==1) ++num;
	}
	if(n!=1){
		++num;
	}
	return num==3;
}
int main(){
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		int n;
		cin >> n;
		if(sphenic(n)) cout << "1" << endl;
		else cout << "0" << endl;
	}
}