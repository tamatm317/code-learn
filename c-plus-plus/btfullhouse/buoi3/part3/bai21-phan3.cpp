#include<iostream>
using namespace std;
int check (int n){
	int res = n, sum = 0;
	while (res>0){
		int temp = res%10;
		if(temp==9){
			return 0;
		}
		sum = sum*10 +temp;
		res/=10;
	}
	if(sum==n)return 1;
	else return 0;
}
int main(){
	int n;
	cin >> n;
	int count = 0;
	// int *arr = new int[count];
	for(int i = 2; i<n; ++i){
		if(check(i)){
			++count;
		}
	}
	cout << count << endl;
	for(int i = 2; i<n;++i){
		if(check(i)) cout << i << " ";
	}
	// delete[]arr;
}