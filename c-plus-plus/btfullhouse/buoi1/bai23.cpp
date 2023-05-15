//thuong ->hoa
#include<iostream>
using namespace std;
int main(){
	char n;
	cin >> n;
	if(n>=97&&n<=122){
		n = n-32;
		cout << n;
	}
	else cout << n;
}