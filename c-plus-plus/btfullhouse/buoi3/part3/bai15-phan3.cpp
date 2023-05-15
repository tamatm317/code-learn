#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int odd = 0, even = 0;
	for(int i = n; i>0; i/=10){
		int temp = i%10;
		if(temp%2==0)++even;
		else ++odd;
	}
	cout << odd << " " << even;
}