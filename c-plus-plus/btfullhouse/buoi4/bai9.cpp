#include<iostream>
using namespace std;
// tinh giai thua su dung de quy
long long factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main(){
	int n;
	cin >> n;
	cout << factorial(n);
}