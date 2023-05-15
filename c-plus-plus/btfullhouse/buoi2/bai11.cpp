// S=−1+2−3+4−5+…..+(−1)n∗n.
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void tong6(int n){
	int sum = 0;
	for(int i = 1; i<=n; ++i){
		 sum+=pow(-1,i)*i;
	}
	cout <<  sum;
}
int main(){
	int n;
	cin >> n;
	tong6(n);
}