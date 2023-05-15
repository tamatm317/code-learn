// S=1+1/2+1/3+1/4+….+1/n
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void tong4(int n){
	float sum = 0;
	for(int i = 1; i<=n; ++i){
		 sum+=1.0/i;
	}
	cout << fixed << setprecision(3) << sum;
}
int main(){
	int n;
	cin >> n;
	tong4(n);
}