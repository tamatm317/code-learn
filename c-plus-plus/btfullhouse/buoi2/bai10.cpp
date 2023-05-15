// S=1/2+1/4+1/6+1/8+…….+1/(2n).
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void tong5(int n){
	float sum = 0;
	for(int i = 1; i<=n; ++i){
		 sum+=1.0/(i*2);
	}
	cout << fixed << setprecision(2) << sum;
}
int main(){
	int n;
	cin >> n;
	tong5(n);
}