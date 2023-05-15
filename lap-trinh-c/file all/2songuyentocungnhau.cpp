#include <bits/stdc++.h>
using namespace std;
int songuyento(int a, int b){
	for (int i = 2; i<=a && i <=b; ++i){
		// if ( !(a%i) && !(b%i)) return 0;
		if ( a%i == 0 && b%i == 0) return 0;
	}
	return 1;
}
int main(){
	int a,b;
	cin >> a >>  b;
	if (songuyento(a,b) == 1) cout << "YES";
	else cout << "NO";
}