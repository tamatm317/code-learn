#include<iostream>
using namespace std;
long long deQui(long long n)
{
	if(n<10) return n%10;
	return deQui(n/10);
}
int main(){
	long long n;
	cin >> n;
	cout << deQui(n); 
}