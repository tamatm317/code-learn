#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	int t = sqrt(n);
	for(int i = 1; i<=t; ++i){
		
		cout << pow(i,2) << " ";
	}
}