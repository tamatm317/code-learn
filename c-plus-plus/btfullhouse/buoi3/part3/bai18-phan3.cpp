#include<iostream>
using namespace std;
int check (int n){
	int res = n, sum = 0, c6 = 0, all_element = 0;
	while (res>0){
		int temp = res%10;
		all_element += temp;
		sum = sum*10 +temp;
		if(temp==6) ++c6;
		res/=10;
	}
	if(sum==n&&c6>0&&all_element%10==8)return 1;
	else return 0;
}
int main(){
	int l,r;
	cin >> l >> r;
	int count = 0;
	for(int i = l; i<=r; ++i){
		if(check(i)){
			cout << i << " ";
			++count;
		}
	}
	if(count==0) cout << -1;
}