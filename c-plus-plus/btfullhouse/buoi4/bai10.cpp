#include<iostream>
using namespace std;
long long deQui(long long n, long long sdn = 0)
{
	if (n == 0)
		return sdn;
	else
	{
		sdn = sdn*10 + n%10;
		return deQui(n/10, sdn);
	}
}
int main(){
	long long n;
	cin >> n;
	cout << deQui(n); 
}