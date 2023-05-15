#include<iostream>
using namespace std;
int main(){
	char kitu = ' ';
	int odd = 0, even = 0, n = 0;
	while(kitu != '\n'){
		int x;
		cin >> x;
		++n;
		if(x%2==0)++even;
		else ++odd;
		kitu = getchar();
	}
	if(n%2==0&&even>odd) cout << "YES";
	else if(n%2==1&&even<odd) cout << "YES";
	else cout << "NO";
}