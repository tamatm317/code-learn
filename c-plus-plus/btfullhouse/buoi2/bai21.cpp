#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int count = 0;
	long long res = n;
	while(res>0){
		long long temp=res%10;
		if(temp==2||temp==3||temp==5||temp==7) ++count;
		res/=10;
	}
	cout << count;
}