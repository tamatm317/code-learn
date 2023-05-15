// a^b mod (10^9+7)
#include<iostream>
#include<cmath>
#include <algorithm>
#define ll long long
using namespace std;
unsigned long long factorial(long long a, long long b)
{
    unsigned long long M = 1000000007;
    unsigned long long temp = binpow(a,b)%M;
    return temp;
} 
int main(){
	int test_case;
	cin >> test_case;
	for(int i= 1; i<=test_case;++i){
		double a,b;
		cin >> a >> b;
		cout << factorial(a,b)<<endl;
	}
	
}