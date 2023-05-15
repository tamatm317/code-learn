#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	long long n;
	cin >> n;
	double s = 0;
	for(long long i =1; i<=n; ++i){
		s+= 1.0 / ((double)i*(i+1));
	}
	cout << fixed << setprecision(2) << s;
}