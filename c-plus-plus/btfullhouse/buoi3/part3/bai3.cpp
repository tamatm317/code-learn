#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int test_case;
	cin >> test_case;
	for(int i = 1; i<=test_case; ++i){
		int r,l;
		cin >> l >> r;
		for(int i = ceil(sqrt(l)); i<=sqrt(r);++i){
			cout << pow(i,2) << " ";
		}
		cout << endl;
	}
}