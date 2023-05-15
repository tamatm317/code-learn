// đếm xem n! tận cùng = bao nhiêu số 0
#include <bits/stdc++.h>
using namespace std;
int count_0(int n){
	int count = 0;
	for (int i = 5; i<=n; i+=5){
		int temp = i;
		while ( !(temp%5)){
			++count;
			temp /=5;
		}
	}
	return count;
}
int count_0_2(int n){
	int count = 0;
	for (int i = 5; i<=n; i*=5){
		count += n/i;
	}
	return count;
}
int main(){
	int n;
	cin >> n;
	cout << count_0(n) << endl;
	cout << count_0_2(n);
}