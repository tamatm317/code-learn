#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		int x, count = 0;
		cin >> x;
		for(int i = 1; i<=sqrt(x);++i){
			if(x%i==0) count +=2;
		}
		if(sqrt(x)*sqrt(x)==x)count -= 1;
		if(x==1) count = 1;
		cout << count << endl;
	}
}